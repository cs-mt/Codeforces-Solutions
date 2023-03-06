/*
 * Mon 06 Mar 2023 07:36:08 AM UTC
 * https://codeforces.com/problemset/problem/116/A
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

    int minNeededCapacity = 0;
    int currentPassengers = 0;

    for(int i=0;i<n;i++){
        int a,b;
        cin >> a;
        cin >> b;

        currentPassengers+=(b-a);
        if(currentPassengers > minNeededCapacity){
            minNeededCapacity = currentPassengers;
        }
    }

    cout << minNeededCapacity;

    return 0;
}
