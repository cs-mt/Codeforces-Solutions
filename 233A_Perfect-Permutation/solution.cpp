/*
 * Fri 03 Mar 2023 02:53:26 PM UTC
 * https://codeforces.com/problemset/problem/233/A
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

    vector<int> perm;

    for(int i=0;i<n;i++){
        perm.push_back(i+1);
    }


    if(n % 2 != 0){
        cout << "-1";
        return 0;
    }

    for(int i=0;i<perm.size();i+=2){
        swap(perm[i], perm[i+1]);
    }

    for(auto it : perm){
        cout << to_string(it) + " ";
    }

    return 0;
}
