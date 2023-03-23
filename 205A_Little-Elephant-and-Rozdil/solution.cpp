/*
 * Thu 23 Mar 2023 07:07:40 PM UTC
 * https://codeforces.com/problemset/problem/205/A
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

    int min=10000000000;
    int mini=-1;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a < min){
            min = a;
            mini = i+1;
        }else if(a == min){
            mini = -1;
        }
    }

    if(mini == -1){
        cout << "Still Rozdil";
    }else {
        cout << mini;
    }

    return 0;
}
