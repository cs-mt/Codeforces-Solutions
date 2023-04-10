/*
 * Mon 10 Apr 2023 07:14:48 AM UTC
 * https://codeforces.com/problemset/problem/149/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int k;
    cin >> k;

    vector<int> months;

    for(int i=0;i<12;i++){
        int a;
        cin >> a;

        months.push_back(a);
    }

    sort(months.begin(), months.end(), greater<int>());

    int count = 0;

    for(auto it : months){
        if (k<= 0) break;
        k-=it;
        ++count;
    }

    if (k>0) cout << -1;
    else cout << count;

    return 0;
}
