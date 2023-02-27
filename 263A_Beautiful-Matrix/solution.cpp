#include <iostream>

using namespace std;

int main(){
	int x=1,y=1;

	int t = 25;

	while(t>0){
		--t;

		int in;
		cin >> in;

		if (in == 1){
			break;
		}

		++x;

		if (x>5){
			x=1;
			++y;
		}
	}
	
	int totalDiff = abs(x-3) + abs(y-3);
	cout << totalDiff;
}
