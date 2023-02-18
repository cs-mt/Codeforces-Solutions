// 2023-02-18 06:06 UTC+3
// https://codeforces.com/problemset/problem/1795/A

#include <iostream>
#include <string>

using namespace std;

bool isBeautiful(string tower){
  char prev='0';
  for(char it : tower){
    if (prev != '0' && it == prev){
      return false;
    }
    prev = it;
  }
  return true;
}

int main(){
  int t;
  cin >> t;
  while(t>0){
    --t;

    int n,m;

    cin >> n;
    cin >> m;

    string s,t;

    cin >> s;
    cin >> t;

    if(!isBeautiful(t) && !isBeautiful(s)){
      cout << "NO" << endl;
      continue;
    }else if(isBeautiful(t) && isBeautiful(s)){
      cout << "YES" << endl;
      continue;
    }

    bool cont = false;

    while(!isBeautiful(t) && t.length() > 1){
      char t_last = t[t.length()-1];
      t.erase(t.end()-1);

      s+=t_last;
      
      if(isBeautiful(t) && isBeautiful(s)){
        cout << "YES" << endl;
        cont = true;
        break;
      }
    }

    if(cont) continue;

    while(!isBeautiful(s) && s.length() > 1){
      char s_last = s[s.length()-1];
      s.erase(s.end()-1);

      t+=s_last;
      
      if(isBeautiful(t) && isBeautiful(s)){
        cout << "YES" << endl;
        cont = true;
        break;
      }
    }

    if (cont) continue;

    cout << "NO" << endl;
  }
  return 0;
}
