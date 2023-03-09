/*
 * Thu 09 Mar 2023 01:15:15 PM UTC
 * https://codeforces.com/contest/1802/problem/A
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

        vector<int> a;

        int pos=0,neg=0;

        for(int i=0;i<n;i++){
            int b;
            cin >> b;
            if(b<0) ++neg;
            else ++pos;
            a.push_back(b);
        }

        int sum1 = 0;
        for(int i=1;i<=n;i++){
            if(i <= pos){
                if(sum1 < 0) sum1 = 0;
                sum1+=1;
                cout << sum1 << " ";
            }else {
                sum1-=1;
                if(sum1 < 0) sum1 = 0;
                cout << sum1 << " ";
            }
        }
        cout << endl;

        bool sw = true;
        int sum=0;

        for(int i=1;i<=min(pos, neg)*2;i++){
            if(sw){
                if(sum < 0) sum =0;
                sum+=1;
                cout << sum << " ";
                sw=false;
            }else {
                sum-=1;
                if(sum < 0) sum = 0;
                cout << sum << " ";
                sw=true;
            }
        }

        if(pos > neg){
            for(int i=0;i<pos-neg;i++){
                if(sum < 0) sum = 0;
                sum+=1;
                cout << sum << " ";
            }
        }else {
             for(int i=0;i<neg-pos;i++){
                sum-=1;
                if(sum < 0) sum = 0;
                cout << sum << " ";
            } 
        }

        cout << endl;
    }

    return 0;
}
