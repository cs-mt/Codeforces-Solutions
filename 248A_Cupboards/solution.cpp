/*
 * Sun 05 Mar 2023 10:41:18 AM UTC
 * https://codeforces.com/problemset/problem/248/A
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

    int leftOpen = 0;
    int rightOpen = 0;

    for(int i=0;i<n;i++){
        int l,r;
        cin >> l;
        cin >> r;

        if(l == 1) ++leftOpen;
        if(r == 1) ++rightOpen;
    }

    int leftClosed = n-leftOpen;
    int rightClosed = n-rightOpen;

    int minTime = min(leftClosed, leftOpen) + min(rightClosed, rightOpen);
    cout << minTime;




    return 0;
}
