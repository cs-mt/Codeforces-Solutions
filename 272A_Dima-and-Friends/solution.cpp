/*
 * Thu 16 Mar 2023 03:45:40 PM UTC
 * https://codeforces.com/problemset/problem/272/A
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

    int total = 0;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;

        total+=a;
    }

    int suitable = 0;

    for(int i=1;i<=5;i++){
        if ((total+i-1) % (n+1) != 0) ++suitable;
    }

    cout << suitable;

    return 0;
}
