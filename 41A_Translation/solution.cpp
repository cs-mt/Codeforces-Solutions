/*
 * Thu 30 Mar 2023 08:05:38 AM UTC
 * https://codeforces.com/problemset/problem/41/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    string s,t;

    cin >> s;
    cin >> t;

    reverse(t.begin(), t.end());

    if(s == t){
        cout << "YES";
    }else {
        cout << "NO";
    }

    return 0;
}
