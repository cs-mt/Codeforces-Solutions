/*
 * Fri 17 Mar 2023 06:11:32 PM UTC
 * https://codeforces.com/problemset/problem/450/A
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int n,m;
    cin >> n;
    cin >> m;

    vector<int> queue;
    unordered_map<int,int> wants;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        wants[i+1] = a;
        queue.push_back(i+1);
    }

    while(queue.size() > 1){
        if(m >= wants[queue[0]]){
            queue.erase(queue.begin());
        }else {
            int a = queue[0];
            wants[a] -= m;
            queue.erase(queue.begin());
            queue.push_back(a);
        }
    }

    cout << queue[0];

    return 0;
}
