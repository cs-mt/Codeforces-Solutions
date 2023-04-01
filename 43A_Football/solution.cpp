/*
 * Sat 01 Apr 2023 08:46:27 PM UTC
 * https://codeforces.com/problemset/problem/43/A
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

    unordered_map<string, int> goals;

    string teamA="",teamB="";


    while(n>0){
        --n;

        string a;
        cin >> a;
        ++goals[a];

        if(teamA == ""){
            teamA = a;
        }else if(teamA != a && teamB == ""){
            teamB = a;
        }
    }

    if(goals[teamA] > goals[teamB]) cout << teamA;
    else cout << teamB;


    return 0;
}
