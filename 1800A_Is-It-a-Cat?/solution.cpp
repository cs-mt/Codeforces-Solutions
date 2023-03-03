/*
 * Thu 02 Mar 2023 05:47:46 PM UTC
 * https://codeforces.com/contest/1800/problem/A
*/


#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int t;
    cin >> t;

    while(t>0){
        --t;

        int n;
        cin >> n;

        string s;
        cin >> s;

        std::transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return std::tolower(c); });

        s.erase(unique(s.begin(), s.end()), s.end());

        if(s=="meow"){
            cout << "YES" << endl;
            continue;
        }else {
            cout << "NO" << endl;
            continue;
        }

    }

    return 0;
}
