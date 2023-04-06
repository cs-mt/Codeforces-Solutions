/*
 * Thu 06 Apr 2023 05:02:08 AM UTC
 * https://codeforces.com/problemset/problem/214/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int n,m;
    cin >> n;
    cin >> m;

    int a=0,b=0;

    int possible = 0;

    while(b*b <= m){
        a+=1;

        if(a*a > n){
            a = 0;
            b+=1;
        }

        if(a*a+b==n && a+b*b==m) ++possible;
   }

    cout << possible;

    return 0;
}
