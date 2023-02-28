/*
 * Tue 28 Feb 2023 06:52:40 PM UTC
 * https://codeforces.com/contest/1796/problem/B
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t>0){
        --t;

        string a;
        cin >> a;

        string b;
        cin >> b;

        if(a[0] == b[0]){
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            continue;
        }
 
        if(a[a.length()-1] == b[b.length()-1]){
            cout << "YES" << endl;
            cout << "*" << a[a.length()-1] << endl;
            continue;
        }
 
        bool found = false;
 
        for(int i=0;i<a.length()-1;i++){
            string f = std::string() + a[i] + a[i+1];
 
            if(b.find(f) != string::npos){
                if(f.length() < 2) break;
                found = true;
                cout << "YES" << endl;
                cout << "*" << f << "*" << endl;
                break;
            }
        }
 
        if(found) continue;

        cout << "NO" << endl;
    }

    return 0;
}

