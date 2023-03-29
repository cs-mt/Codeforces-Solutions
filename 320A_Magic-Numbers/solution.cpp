/*
 * Wed 29 Mar 2023 12:03:35 AM UTC
 * https://codeforces.com/problemset/problem/320/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    string n;
    cin >> n;

    n = regex_replace(n, regex("144|14|1"), "");

    if(n.length() > 0){
        cout << "NO";
    }else {
        cout << "YES";
    }

    return 0;
}
