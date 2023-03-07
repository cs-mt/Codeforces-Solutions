/* 
 * Tue 07 Mar 2023 01:37:48 PM UTC
 * https://codeforces.com/problemset/problem/236/A 
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

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    int distinct = s.length();

    if(distinct % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}
