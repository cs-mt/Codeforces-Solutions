/*
 * Mon 13 Mar 2023 12:35:42 PM UTC
 * https://codeforces.com/problemset/problem/282/A
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

    int x = 0;

    while(n>0){
        --n;

        string s;
        cin >> s;

        if(s.find("+") != string::npos){
            ++x;            
        }else {
            --x;
        }
    }

    cout << x;

    return 0;
}
