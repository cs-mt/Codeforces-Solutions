/*
 * Sun 12 Mar 2023 04:10:04 PM UTC
 * https://codeforces.com/contest/1804/problem/B
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

    while(t>0){
        --t;

        int a,b;
        cin >> a;
        cin >> b;

        if (abs(a) == abs(b)){
            cout << abs(a)*2 << endl;
        }else {
            cout << max(abs(a),abs(b))*2-1 << endl;
        }
    }

    return 0;
}
