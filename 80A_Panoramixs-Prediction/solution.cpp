/*
 * Thu 02 Mar 2023 09:12:40 AM UTC
 * https://codeforces.com/problemset/problem/80/A
 */

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

signed main(){
    OPTIMIZE();

    int n,m;
    cin >> n;
    cin >> m;

    if(m<=n){
        cout << "NO";
        return 0;
    }

    int lastprime = -1;
    for(int i=n+1;i<=m;i++){
        if(isPrime(i)){
            if(i!=m){
                cout << "NO";
                return 0;
            }else {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}
