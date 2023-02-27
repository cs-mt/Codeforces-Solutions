/*
 * Mon 27 Feb 2023 10:23:13 AM UTC
 * https://codeforces.com/problemset/problem/266/B
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(){
	int n,t;
	cin >> n;
	cin >> t;

	string queue;
	cin >> queue;


	// Rearrange the queue every iteration.
	for(int i=0;i<t;i++){
		vector<int> changes;
		for(int x=0;x<queue.length()-1;x++){
			if(queue[x] == 'B' && queue[x+1]=='G'){
				changes.push_back(x);
			}
		}

		for(int it : changes){
			queue[it] = 'G';
			queue[it+1] = 'B';
		}
	}
	cout << queue << endl;
}

int main(){
/*	int t;
	cin >> t;
	while(t > 0){
		--t;
		solve();
	}*/
solve();
}
