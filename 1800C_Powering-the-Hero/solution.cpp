/*
 * Thu 02 Mar 2023 05:46:24 PM UTC
 * https://codeforces.com/contest/1800/problem/C2
*/

#include <algorithm>
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

        priority_queue<int> bonus;

        int power=0;
        while(n > 0){
            --n;
            int s;
            cin >> s;

            if(s == 0 && !bonus.empty()){
                int add = bonus.top();
                bonus.pop();
                power += add;
            }else if(s > 0){
                bonus.push(s);
            }
        }

        cout << power << endl;

    }

    return 0;
}
