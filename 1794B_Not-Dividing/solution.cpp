/*
 * Sat 04 Mar 2023 07:13:30 PM UTC
 * https://codeforces.com/contest/1794/problem/B
 */

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int t;
    cin >> t;

    while(t>0){
        --t;

        int n;
        cin >> n;

        vector<int> arr;

        for(int i=0;i<n;i++){
            int a;
            cin >> a;

            arr.push_back(a);
        }


        for (int i = 0; i < n; i++) {
            while (arr[i] < 2 || (i > 0 && arr[i] % arr[i - 1] == 0)) {
                arr[i]++;
            }
            cout << arr[i] << " ";
        }

        cout << endl;

    }

    return 0;
}
