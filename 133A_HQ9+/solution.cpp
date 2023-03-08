/*
 * Wed 08 Mar 2023 04:47:31 PM UTC
 * https://codeforces.com/problemset/problem/133/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    string p;
    cin >> p;

    for(auto it : p){
        if(it == 'H' || it == 'Q' || it == '9'){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
