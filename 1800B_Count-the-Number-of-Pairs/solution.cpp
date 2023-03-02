/*
 * Thu 02 Mar 2023 05:47:06 PM UTC
 * https://codeforces.com/contest/1800/problem/B
*/

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    //    OPTIMIZE();

    int t;
    cin >> t;

    while(t>0){
        --t;


        int n,k;
        cin >> n;
        cin >> k;

        string s;
        cin >> s;

        map<char, int> lowerchars;
        map<char, int> upperchars;

        for(int i=0;i<s.length();i++){
            if(isupper(s[i])){
                upperchars[s[i]]++;
            }else {
                lowerchars[s[i]]++;
            }
        }


        int burls = 0;


        for ( const auto &pair : upperchars ) {
            char key =  pair.first;
            int uppercount = pair.second;

            int lowercount = lowerchars[tolower(key)];

            int add = min(uppercount,lowercount);

            burls+=add;

            int newupper = uppercount-add;
            int newlower = lowercount-add;

            if(newupper > 0 && k > 0){
                if(newupper%2==1){
                    --newupper;
                }

                    while(newupper > 0 && k > 0){
                        newupper-=2;
                        --k;
                        ++burls;
                    }
                
                
            }

            if(newlower > 0 && k > 0){
                if(newlower%2==1){
                    --newlower;
                }
                    while(newlower > 0 && k > 0){
                        newlower-=2;
                        --k;
                        ++burls;
                    }
                
                
            }

            upperchars[key] = newupper;
            lowerchars[tolower(key)] = newlower;




        }


        for ( const auto &pair : lowerchars ) {
            char key =  pair.first;
            int uppercount = pair.second;

            int lowercount = upperchars[toupper(key)];

            int add = min(uppercount,lowercount);

            burls+=add;

            int newupper = uppercount-add;
            int newlower = lowercount-add;

            if(newupper > 0 && k > 0){
                if(newupper%2==1){
                    --newupper;
                }

                    while(newupper > 0 && k > 0){
                        newupper-=2;
                        --k;
                        ++burls;
                    }
                
                
            }

            if(newlower > 0 && k > 0){
                if(newlower%2==1){
                    --newlower;
                }
                    while(newlower > 0 && k > 0){
                        newlower-=2;
                        --k;
                        ++burls;
                    }
                
                
            }

            lowerchars[key] = newupper;
            upperchars[toupper(key)] = newlower;




        }



        cout << burls << endl;




    }

    return 0;
}
