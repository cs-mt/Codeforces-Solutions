/*
 * Mon 10 Apr 2023 07:25:35 AM UTC
 * https://codeforces.com/problemset/problem/208/A
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

    s = std::regex_replace(s, std::regex("WUB"), " ");
    s = std::regex_replace(s, std::regex("\\s+"), " ");

    if(s[0] == ' ') s.erase(0, 1);
    if(s[s.length()-1] == ' ') s.erase(s.length()-1, 1);

    cout << s;

    return 0;
}
