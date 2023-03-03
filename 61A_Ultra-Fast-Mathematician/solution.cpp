/*
 * Fri 03 Mar 2023 08:31:11 AM UTC
 * https://codeforces.com/problemset/problem/61/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();


    string x,y;
    cin >> x;
    cin >> y;

    string result = "";

    for(int i=0;i<x.length();i++){
        if(x[i] != y[i]){
            result += '1';
        }else{
            result += '0';
        }
    }

    cout << result;


    return 0;
}
