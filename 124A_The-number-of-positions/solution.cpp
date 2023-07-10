/*
 * Mon 10 Jul 2023 06:46:08 AM UTC
 * https://codeforces.com/problemset/problem/124/A
*/

#include <bits/stdc++.h>
     
using namespace std;
     
#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    int n, a, b;

    cin >> n;
    cin >> a;
    cin >> b;

    if(n-a<=b){
        cout << n-a;
    }else {
        cout << b+1;
    }

    return 0;
}
