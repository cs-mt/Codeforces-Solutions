/*
 * Tue 07 Mar 2023 08:40:40 AM UTC
 * https://codeforces.com/problemset/problem/228/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int s1,s2,s3,s4;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cin >> s4;

    vector<int> nums = {s1, s2, s3, s4};

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    int after = nums.size();

    cout << 4-after;


    return 0;
}
