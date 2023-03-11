/*
 * Sat 11 Mar 2023 09:30:24 AM UTC
 * https://codeforces.com/problemset/problem/231/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int t;
    cin >> t;

    int ok = 0;
    while(t>0){
        --t;

        int a,b,c;
        cin >> a;
        cin >> b;
        cin >> c; 

        if(a+b+c >= 2) ++ok;

    }

    cout << ok;

    return 0;
}
