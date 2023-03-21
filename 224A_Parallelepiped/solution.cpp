/*
 * Tue 21 Mar 2023 02:05:12 PM UTC
 * https://codeforces.com/problemset/problem/224/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t


signed main(){
    OPTIMIZE();

    int xy,xz,zy;
    cin >> xy;
    cin >> xz;
    cin >> zy;

    int x=0;
    int y,z;

    while(true){
        ++x;

        if((xy+xz) % x != 0) continue;
        if(xz % x != 0) continue;

        z = xz/x;
        y = zy/z;

        if(zy % z != 0) continue;
        if(z*y + x*y + x*z == xy+xz+zy) break;
    }

    cout << (x+y+z)*4;

    return 0;
}
