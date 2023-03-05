/*
 * Sun 05 Mar 2023 10:50:11 AM UTC
 * https://codeforces.com/problemset/problem/155/A
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

    int minRecord = 0;
    int maxRecord = 0;

    int amazing = 0;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;

        if(i==0){
            minRecord=a;
            maxRecord=a;
            continue;
        }

        if(a>maxRecord){
            maxRecord = a;
            ++amazing;
        }else if(a<minRecord){
            minRecord = a;
            ++amazing;
        }
    }

    cout << amazing;

    return 0;
}
