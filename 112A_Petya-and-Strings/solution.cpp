/*
 * Fri 10 Mar 2023 08:48:25 AM UTC
 * https://codeforces.com/problemset/problem/112/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    string a,b;
    cin >> a;
    cin >> b;


    std::transform(a.begin(), a.end(), a.begin(),
    [](unsigned char c){ return std::tolower(c); });

    std::transform(b.begin(), b.end(), b.begin(),
    [](unsigned char c){ return std::tolower(c); });

    if(a == b){
        cout << "0";
    }else if(a < b){
        cout << "-1";
    }else{
        cout << "1";
    }

    return 0;
}
