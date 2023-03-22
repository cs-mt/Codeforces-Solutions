/*
 * Wed 22 Mar 2023 04:26:37 PM UTC
 * https://codeforces.com/problemset/problem/34/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int n;
    cin >> n;

    int mindiff=1001;

    int prev=-1;
    pair<int, int> p;

    int first;;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;

        if(prev==-1){
            prev = a;
            first = a;
            continue;
        }

        int diff = abs(prev-a);
        prev = a;
        if(diff < mindiff){
            mindiff = diff;
            p.first = i;
            p.second= i+1;
        }

        if(i==n-1){
            if(abs(first-a) < mindiff){
                mindiff = diff;
                p.first = i+1;
                p.second= 1;
            }
        }
    }

    cout << p.first << " " << p.second;

    return 0;
}
