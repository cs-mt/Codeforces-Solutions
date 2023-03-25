/*
 * Sat 25 Mar 2023 08:55:46 PM UTC
 * https://codeforces.com/problemset/problem/352/A
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

    vector<int> nums;

    int sum = 0;
    bool zero = false;
    while(n>0){
        --n;

        int a;
        cin >> a;
        nums.push_back(a);
        sum+=a;
        if(a == 0) zero = true;
    }

    if(!zero) {
        cout << -1;
        return 0;
    }

    sort(nums.rbegin(), nums.rend());

    while(nums.size() > 0){
        if(sum%9 == 0){
            if(nums.front() == 0){
                cout << 0;
                return 0;
            }

            for(auto it : nums){
                cout << it;
            }
            return 0;
        }else {
            if(nums.front() == 5){
                nums.erase(nums.begin());
                sum-=5;
            }else {
                break;
            }
        }
    }

    cout << -1;

    return 0;
}
