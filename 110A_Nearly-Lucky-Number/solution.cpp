/*
 * Wed 01 Mar 2023 11:41:02 AM UTC
 * https://codeforces.com/problemset/problem/110/A
*/

#include <bits/stdc++.h>
#include <cstdint>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main(){
    OPTIMIZE();

    int64_t n;
    cin >> n;

    // Check digits

    int luckydigits = 0;
    while(n>0){
        int digit = n%10;
        if (digit==7 || digit == 4){
            ++luckydigits;
        }

        n/=10;
    }

    if(luckydigits == 4 || luckydigits == 7) cout << "YES";
    else cout << "NO";

    return 0;
}
