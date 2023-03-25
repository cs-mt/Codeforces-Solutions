/*
 * Sat 25 Mar 2023 02:04:58 AM UTC
 * https://codeforces.com/problemset/problem/199/A
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

    int a=0;
    int b=1;

    vector<int> nums;

    if(n==0){
        cout << "0 0 0";
        return 0;
    }

    if(n==1){
        cout << "0 1 0";
        return 0;
    }

    if(n==2){
        cout << "1 1 0";
        return 0;
    }

    while(n >= b){
        nums.push_back(a);
        int newfib = a+b;
        a = b;
        b=newfib;
    }

    if(nums.size() >= 3 && nums.back() + nums[nums.size()-3] + nums[nums.size()-4] == n){
        cout << nums.back() << " " << nums[nums.size()-3] << " " << nums[nums.size()-4];
        return 0;
    }

    cout << "I'm too stupid to solve this problem";


    return 0;
}
