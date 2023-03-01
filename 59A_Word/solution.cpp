/*
 * Wed 01 Mar 2023 08:20:39 AM UTC
 * https://codeforces.com/contest/59/problem/A
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int upper = 0;

    for (auto it : s){
        if(isupper(it)) ++upper;

        if(upper > s.length()/2){
            std::transform(s.begin(), s.end(), s.begin(),
                    [](unsigned char c){ return std::toupper(c); });

            cout << s;
            return 0;
        }
    }

    std::transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return std::tolower(c); });

    cout << s;

    return 0;
}
