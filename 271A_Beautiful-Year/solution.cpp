/*
 * Tue 28 Feb 2023 06:42:50 AM UTC
 * https://codeforces.com/problemset/problem/271/A
*/

#include <iostream>
#include <vector>

using namespace std;

bool isDistinct(int year){
	vector<int> digits;

	for(int i=0;i<4;i++){
		digits.push_back(year%10);
		year/=10;
	}

	for(int i=0;i<digits.size();i++){
		for(int x=0;x<digits.size();x++){
			if(x!=i && digits[x] == digits[i]){
				return false;
			}
		}
	}

	return true;
}

int main(){
	int year;
	cin >> year;

	++year;

	while(!isDistinct(year)){
		++year;
	}

	cout << year;
}
