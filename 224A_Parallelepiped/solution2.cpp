/*
 * Tue 21 Mar 2023 02:23:07 PM UTC
 * https://codeforces.com/problemset/problem/224/A
*/

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    // Areas of 3 distinct sides.
    int xy,xz,zy;

    cin >> xy;
    cin >> xz;
    cin >> zy;

    // xy*zy = xyzy
    // xyzy / xz = y^2
    // The same applied to other 2 combinations.

    int x = sqrt(xy*xz/zy);
    int y = sqrt(xy*zy/xz);
    int z = sqrt(xz*zy/xy);

    // There are 12 edges. We have the 3 distinct edges. The sum of all edges is 4 * (x+y+z)

    cout << 4*(x+y+z);

    return 0;
}
