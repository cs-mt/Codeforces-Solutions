/*
 * Mon 06 Mar 2023 11:19:48 AM UTC
 * https://codeforces.com/problemset/problem/339/A
 */

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    string s;
    cin >> s;

    vector<int> nums;

    for(auto it : s){
        if(it=='+') continue;

        nums.push_back(stoi(string(1, it)));
    }

    sort(nums.begin(), nums.end());

    string out = "";

    for(auto it : nums){
        out+= to_string(it) + "+";
    }

    out.pop_back();

    cout << out;

    return 0;
}
