/*
 * Sat 04 Mar 2023 08:45:46 AM UTC
 * https://codeforces.com/problemset/problem/144/A
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


    vector<int> heights;

    while(n > 0){
        --n;

        int height;
        cin >> height;

        heights.push_back(height);
    }

    int maxElementIndex = distance(heights.begin(), max_element(heights.begin(), heights.end()));

    int seconds = 0;

    for(int i=maxElementIndex;i>0;i--){
        ++seconds;
        swap(heights[i], heights[i-1]);
    }

    // Use rbegin and rend to get the minimum element closest to the end of the vector.
    // Subtract it from the last index of the vector to get the index from the start of the vector.

    int minElementIndex = heights.size() - 1 - (distance(heights.rbegin(), min_element(heights.rbegin(), heights.rend())));

    for(int i=minElementIndex;i<heights.size()-1;i++){
        ++seconds;
        swap(heights[i], heights[i+1]);
    }

    cout << seconds;

    return 0;
}
