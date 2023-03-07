/*
 * Tue 07 Mar 2023 05:20:46 PM UTC
 * https://codeforces.com/problemset/problem/141/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    string guestName;
    string residenceHostName;
    string letters;

    cin >> guestName;
    cin >> residenceHostName;
    cin >> letters;

    int foundCount = 0;
    int needed = guestName.length() + residenceHostName.length();

    for(auto it : letters){
        size_t found = guestName.find(it);
        if(found != string::npos){
            ++foundCount;
            guestName.erase(found, 1);
        }else {
            found = residenceHostName.find(it);
            if(found != string::npos){
                residenceHostName.erase(found, 1);
                ++foundCount;
            }
        }
    }

    if(needed == foundCount && foundCount == letters.length()){
        cout << "YES";
    }else {
        cout << "NO";
    }


    return 0;
}
