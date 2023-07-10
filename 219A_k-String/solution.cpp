

    // https://codeforces.com/problemset/problem/219/A
     
    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
    #define endl '\n'
    #define int int64_t
     
    signed main(){
     
        int k;
        cin >> k;
     
        string s;
        cin >> s;
     
        map<char, int> letters;
     
        int n;
        
        for(auto it : s){
            ++letters[it];
            n = letters[it];
        }
     
     
        for(auto it : letters){
            if(it.second % k != 0){
                cout << -1;
                return 0;
            }
        }

        if(s.length() / k == 1){
            cout << s;
            return 0;
        }

     
        for(int i=0;i<k;i++){
            for(auto it : letters){
                for(int z=0;z<it.second/k;z++){
                     cout << it.first;
                }
            
            }
        }
     
        return 0;
    }
