/*
 * Tue 28 Mar 2023 03:43:39 AM UTC
 * https://codeforces.com/problemset/problem/339/B
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

    vector<int> nums;

    for(int i=0;i<m;i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }

    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    int total = 0;
    int prev = 0;

    for(int i=0;i<nums.size();i++){
        if(nums[i] < prev){
            total+=n;
        }
        prev = nums[i];
    }

    total+=prev;

    cout << total-1;

    return 0;
}
