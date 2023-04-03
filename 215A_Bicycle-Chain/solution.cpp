/*
 * Mon 03 Apr 2023 12:24:13 AM UTC
 * https://codeforces.com/problemset/problem/215/A
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

    vector<int> starsf;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;

        starsf.push_back(a);
    }

    int m;
    cin >> m;

    vector<int> starsb;

    for(int i=0;i<m;i++){
        int a;
        cin >> a;

        starsb.push_back(a);
    }

    float maxratio = 0;

    unordered_map<float, int> ratiocount;

    for(int x = 0;x<starsb.size();x++){
        for(int y = 0;y<starsf.size();y++){

            int a = starsb[x];
            int b = starsf[y];

            if(a%b!=0) continue;

            int ratio = a/b;

            ratiocount[ratio]++;
            if(ratio > maxratio){
                maxratio = ratio;
            }
        }
    }


    cout << ratiocount[maxratio];

    return 0;
}
