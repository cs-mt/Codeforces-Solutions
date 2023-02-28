/*
 * Tue 28 Feb 2023 06:51:58 PM UTC
 * https://codeforces.com/contest/1796/problem/B
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    string check = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBF";

    while(t > 0){
        --t;

        int k;
        cin >> k;

        string s;
        cin >> s;

        if(check.find(s) != string::npos){
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;

    }

    return 0;
}

