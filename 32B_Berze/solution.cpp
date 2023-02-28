/*
 * Tue 28 Feb 2023 04:39:43 AM UTC
 * https://codeforces.com/problemset/problem/32/B
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	string code;
	cin >> code;


	while(code.length() > 0){
		if(code[0] == '-' && code[1] == '.'){
			cout << 1;
			code.erase(0,2);
		}else if(code[0] == '-' && code[1] == '-'){
			cout << 2;
			code.erase(0,2);
		}
		else{
			cout << 0;
			code.erase(code.begin());
		}
	}
	return 0;
}
