/*
 * Mon 10 Jul 2023 06:46:08 AM UTC
 * https://codeforces.com/problemset/problem/221/A
*/

#include <bits/stdc++.h>
     
using namespace std;
     
#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

void sortFunc(int x, vector<int> &nums){
    if(x == 1) return;

    sortFunc(x-1, nums);
    swap(nums[x-1-1], nums[x-1]);
}

signed main(){

    int n;
    cin >> n;

    vector<int> nums;

    for(int i=0;i<n;i++){
        nums.push_back(i+1);
    }

    for(int i=0;i<n-1;i++){
      sortFunc(n, nums);
    }

    cout << endl;

    for(auto it : nums){
        cout << it << " ";
    }


    return 0;
}
