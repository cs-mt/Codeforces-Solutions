/*
 * Wed 01 Mar 2023 01:13:04 PM UTC
 * https://codeforces.com/problemset/problem/1747/B
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

        for(int i=0;i<n;i++){
            s+="BAN";
        }

        size_t found;

        vector<vector<size_t>> ops;

        while(true){
            found = s.find("BAN");

            if(found == string::npos){
                break;
            }

            size_t swapwith;

            swapwith=s.length()-found-1;

            vector<size_t> op = {found, swapwith};

            ops.push_back(op);

            swap(s[found], s[swapwith]);
        }

        cout << ops.size() << endl;
        for(auto it : ops){
            cout << it[0]+1 << " " << it[1]+1 << endl;
        }

    }

    return 0;
}
