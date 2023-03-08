/*
 * https://codeforces.com/problemset/problem/151/A
 * Wed 08 Mar 2023 02:23:32 PM UTC
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int n,k,l,c,d,p,nl,np;
    cin >> n;
    cin >> k;
    cin >> l;
    cin >> c;
    cin >> d;
    cin >> p;
    cin >> nl;
    cin >> np;

    int ml = k*l;
    int toasts = ml/nl;
    int limes = c*d;
    int salt = p/np;

    cout << min(min(toasts, limes), salt) / n;


    return 0;
}
