// Solved on 2023-02-21 at 05:36 AM UTC+3 
// https://codeforces.com/problemset/problem/1792/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t > 0){
    --t;
    int n;
    cin >> n;

    vector<int> monster_healths;

    while(n > 0){
      --n;
      int h;
      cin >> h;
      monster_healths.push_back(h);
    }

    int totalSpells = 0;

    while(monster_healths.size() > 0){
      sort(monster_healths.begin(), monster_healths.end());

      if(monster_healths[0] == 0 && monster_healths.size() > 0) monster_healths.erase(monster_healths.begin());
      if(monster_healths[0] == 0 && monster_healths.size() > 0) monster_healths.erase(monster_healths.begin());

      int spell1Cost = max(monster_healths[0], monster_healths[1])/2;
      int spell2Cost = 1;

      if(spell1Cost < spell2Cost){
        ++totalSpells;
        --monster_healths[0];
        --monster_healths[1];
      }else{
        ++totalSpells;
        monster_healths[0] = 0;
      }
    }
    cout << totalSpells-1 << endl;
  }
  return 0;
}
