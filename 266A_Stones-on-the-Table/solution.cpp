/*
 * Thu 02 Mar 2023 06:09:11 AM UTC
 * https://codeforces.com/problemset/problem/266/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for(int i=0;i<s.length()-1;i++){
        if(s[i] == s[i+1]){
            ++count;
        }
    }

    cout << count;


    return 0;
}
