/*
 * Sun 05 Mar 2023 08:41:50 AM UTC
 * https://codeforces.com/problemset/problem/148/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int k,l,m,n,d;

    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;

    int damagedDragons = 0;

    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            ++damagedDragons;
        }
    }

    cout << damagedDragons;


    return 0;
}
