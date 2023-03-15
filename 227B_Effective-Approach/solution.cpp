/*
 * Wed 15 Mar 2023 05:12:45 PM UTC
 * https://codeforces.com/problemset/problem/227/B
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

    while(n>0){
        --n;

        int a;
        cin >> a;
        nums.push_back(a);
    }

    int q;
    cin >> q;
    int sumV=0,sumP=0;

    unordered_map<int, int> indexes;

    for(int i=0;i<nums.size();i++){
        indexes[nums[i]] = i;
    }

    while(q>0){
        --q;
        int a;
        cin >> a;

        sumV += indexes[a]+1;
        sumP += nums.size()-indexes[a];
    }

    cout << sumV << " " << sumP;

    return 0;
}
