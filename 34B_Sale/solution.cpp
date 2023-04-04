/*
 * Tue 04 Apr 2023 12:28:04 AM UTC
 * https://codeforces.com/problemset/problem/34/B
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

    vector<int> prices;

    while(n>0){
        --n;

        int a;
        cin >> a;

        prices.push_back(a);
    }

    sort(prices.begin(), prices.end());

    int earn = 0;

    for(int i=0;i<m;i++){
        int price = prices[i];
        if(price >= 0) break;

        earn+=abs(price); 
    }

    cout << earn;

    return 0;
}
