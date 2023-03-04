/*
 * Sat 04 Mar 2023 07:14:07 PM UTC
 * https://codeforces.com/contest/1794/problem/A
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

        bool cont = false;

        unordered_map<int, string> comparison;

        string compare = "";

        int checks = 0;

        for(int i=0;i<(2*n)-2;i++){
            string s;
            cin >> s;

            string reversed = s;

            if(comparison.count(s.length())){
                reverse(reversed.begin(), reversed.end());
                if(comparison[s.length()] == reversed){
                    ++checks;
                }
            }else {
                comparison[s.length()] = s;
        
            }
        }

        if(checks >= (2*n-2)/2){
            cout << "YES" << endl;
            continue;
        }



        cout << "NO" << endl;

    }

    return 0;
}
