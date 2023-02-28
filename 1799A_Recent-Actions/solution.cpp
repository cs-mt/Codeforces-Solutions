/*
 * Tue 28 Feb 2023 03:46:32 AM UTC
 * https://codeforces.com/contest/1799/problem/A
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t>0){
		--t;
		int n,m;
		cin >> n;
		cin >> m;
		vector<int> recentPosts;
		vector<int> p;

		for(int i=0;i<n;i++){
			recentPosts.push_back(i+1);
		}

		vector<int> origPosts = recentPosts;
		unordered_map<int,int> removedMoment;
		int moment = 0;

		while(m>0){
			--m;
			int in;
			cin >> in;

			++moment;
			int add = in;

			if(recentPosts[0] == add){
				continue;
			}

			bool found = false;
			vector<int>::iterator it;
			it = find(recentPosts.begin(), recentPosts.end(), add);

			if(it != recentPosts.end()){
				int pos = it - recentPosts.begin();
				recentPosts[pos] = recentPosts[0];
				recentPosts[0] = add;
				found = true;
			}

			if(found) continue;

			//cout << recentPosts[recentPosts.size()-1] << " " << moment << endl;

			removedMoment[recentPosts[recentPosts.size()-1]] = moment;

			recentPosts.insert(recentPosts.begin(), add);
			recentPosts.pop_back();

		}

		for(int i=0;i<recentPosts.size();i++){
			if(removedMoment[i+1] == 0){
				cout << "-1 ";
			}else{
				cout << removedMoment[i+1] << " ";	
			}
		}

		cout << endl;


	}
}
