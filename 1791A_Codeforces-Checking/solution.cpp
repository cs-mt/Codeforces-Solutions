/*
 * Mon 27 Feb 2023 05:12:06 AM UTC
 * https://codeforces.com/problemset/problem/1791/A 
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;

	string check = "codeforces";

	while(t>0){
		--t;

		char c;
		cin >> c;

		if(check.find(c) != string::npos){
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

