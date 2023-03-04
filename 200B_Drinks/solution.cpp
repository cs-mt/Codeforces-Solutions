/*
 * Sat 04 Mar 2023 10:24:02 AM UTC
 * https://codeforces.com/problemset/problem/200/B
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

    double totalPercent = 0.0;

    for(int i=0;i<n;i++){
        int percent;
        cin >> percent;

        totalPercent += percent;
    }

    cout << totalPercent / n;

    return 0;
}

