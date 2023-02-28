/*
 * Tue 28 Feb 2023 07:49:34 AM UTC
 * https://codeforces.com/problemset/problem/275/A
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<vector<int>> lights;

	for(int i=0;i<3;i++){
		vector<int> v;
		lights.push_back(v);

		for(int z=0;z<3;z++){
			lights[lights.size()-1].push_back(1);	
		}
	}

	int x=0,y=0;

	for(int i=0;i<9;i++){
		int in;
		cin >> in;

		while (in > 0){
			--in;

			lights[y][x] = lights[y][x] == 0 ? 1 : 0;

			if(x-1 >= 0){
				lights[y][x-1] = lights[y][x-1] == 0 ? 1 : 0;
			}

			if(x+1 < 3){
				lights[y][x+1] = lights[y][x+1] == 0 ? 1 : 0;
			}

			if(y-1 >= 0){
				lights[y-1][x] = lights[y-1][x] == 0 ? 1 : 0;
			}

			if(y+1 < 3){
				lights[y+1][x] = lights[y+1][x] == 0 ? 1 : 0;
			}
		}

		++x;

		if(x>2){
			x=0;
			++y;
		}
	}

	for(auto y : lights){
		for(auto x : y){
			cout << x;
		}
		cout << endl;
	}
	
	return 0;
}
