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

        bool cont = false;

        if(s[0] != 'm'){
            cout << "NO" << endl;
            continue;
        }

        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1]){
                continue;
            }

            if(s[i] == 'm' && s[i+1] != 'e'){
                cout << "NO" << endl;
                cont = true;
                break;
            }

            if(s[i] == 'e' && s[i+1] != 'o'){
                cout << "NO" << endl;
                cont = true;
                break;
            }

            if(s[i] == 'o' && s[i+1] != 'w'){
                cout << "NO" << endl;
                cont = true;
                break;
            }
        }

        if(cont) continue;

        if(s[n-1] != 'w') {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;


    }

    return 0;
}
