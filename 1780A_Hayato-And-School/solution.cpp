// 31-01-2023 23:50 UTC+3
// https://codeforces.com/contest/1780/problem/A

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t>0){
		--t;

		int n;
		cin >> n;

		vector<int> a;

		while(n>0){
			--n;
			int x;
			cin >> x;
			a.push_back(x);
		}

		vector<int> odds;
		vector<int> evens;

		bool found = false;

		for(int x=0;x<a.size();x++){
			if(a[x]%2!=0){
				odds.push_back(x);
			}else{
				evens.push_back(x);
			}

			if(odds.size() >= 3){
				cout << "YES" << endl;
				for(int it : odds){
					cout << to_string(it+1) + " ";
				}
				cout << endl;
				found = true;
				break;
			}else if(evens.size() >= 2 && odds.size() >= 1){
				cout << "YES" << endl;
				for(int i=0;i<2;i++){
					cout << to_string(evens[i]+1) + " ";
				}
				cout << to_string(odds[0]+1);	
				cout << endl;
				found = true;
				break;
			}
		}
		if(!found){
			cout << "NO" << endl;
		}
	}
}
