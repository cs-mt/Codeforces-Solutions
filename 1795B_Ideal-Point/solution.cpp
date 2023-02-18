// 2023-02-18 07:51 UTC
// https://codeforces.com/problemset/problem/1795/B

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t > 0){
    --t;

    // Every segment will have a unique id.
    // Every number within the segments will point to segments in which they are in their range.

    int n,k;
    cin >> n;
    cin >> k;

    vector<vector<int>> segments;


    while(n>0){
      --n;
      int a,b;

      cin >> a;
      cin >> b;

      segments.push_back({a,b});
    }

    vector<int> deleted_segments;

    while(true){
      map<int,vector<int>> points_to;


      for(int i=0;i<segments.size();i++){
        vector<int> segment = segments[i];

        if(find(deleted_segments.begin(), deleted_segments.end(), i) != deleted_segments.end()){
          continue;
        }

        int start = segment[0];
        int end = segment[1];

        // Ignore segment if k is not in its range.

        if (k < start || k > end){
          continue;
        }

        for(int x=start;x<=end;x++){
          points_to[x].push_back(i);
        }
      }

      int most_ideal_count = 0;
      int most_ideal = 0;
      int most_ideal_segment_index = 0;

      int ideal_count_k = 0;

      for (const auto &pair : points_to){
        int num = pair.first;
        vector<int> num_points_to = pair.second;

        int num_points_to_count = num_points_to.size();

        if (num == k){
          ideal_count_k = num_points_to_count;
        }else{
          if (num_points_to_count > most_ideal_count){
            most_ideal = num;
            most_ideal_count = num_points_to_count;
            most_ideal_segment_index = num_points_to[0];
          }
        }
      }

      if (most_ideal_count >= ideal_count_k){
        // There is a better number than k.
        // Remove the first segment it points to.
        if(deleted_segments.size() == segments.size() - 1) {
          cout << "NO" << endl;
          break;
        }
        deleted_segments.push_back(most_ideal_segment_index);
      }else{
        cout << "YES" << endl;
        break;
      }
    }

  }
  return 0;
}


