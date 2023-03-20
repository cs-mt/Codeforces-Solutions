/*
 * Mon 20 Mar 2023 03:34:47 PM UTC
 * https://codeforces.com/problemset/problem/139/A
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

    vector<int> days;

    for(int i=0;i<7;i++){
        int a;
        cin >> a;
        days.push_back(a);
    }

    while(true){
        for(int i=0;i<days.size();i++){
            n-=days[i];
            if(n <= 0){
                cout << i+1;
                return 0;
            }
        }
    }

    return 0;
}
