/*
 * Sat 18 Mar 2023 04:13:29 PM UTC
 * https://codeforces.com/problemset/problem/165/A
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

    vector<pair<int,int>> points;

    for(int i=0;i<n;i++){
        int x,y;
        cin >> x;
        cin >> y;

        points.push_back({x,y});
    }

    int supercentralCount = 0;

    for(int i=0;i<points.size();i++){
        bool left=false,right=false,top=false,bottom=false;
        int currX = points[i].first;
        int currY = points[i].second;
        for(int x=0;x<points.size();x++){
            if(x==i) continue;

            int checkX = points[x].first;
            int checkY = points[x].second;

            if (checkX > currX && checkY == currY){
                right = true;
            }else if(checkX < currX && checkY == currY){
                left = true;
            }else if(checkX == currX && checkY < currY){
                bottom = true;
            }else if(checkX == currX && checkY > currY){
                top = true;
            }
        }

        if(top && bottom && left && right){
            ++supercentralCount;
        }
    }

    cout << supercentralCount;

    return 0;
}
