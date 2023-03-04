/*
 * Sat 04 Mar 2023 07:13:30 PM UTC
 * https://codeforces.com/contest/1794/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

#define OPTIMIZE(); ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define int int64_t

signed main(){
    OPTIMIZE();

    int t;
    cin >> t;

    while(t>0){
        --t;

        int n;
        cin >> n;

        vector<int> arr;

        for(int i=0;i<n;i++){
            int a;
            cin >> a;

            arr.push_back(a);
        }

        int maxops = 2*n;
        int ops = 0;

        vector<int> arr2 = arr;
        bool check = true;

        while(check == true){
            check = false;

            for(int i=arr.size();i>0;i--){
                if(arr[i] >= arr[i-1] && arr[i] % arr[i-1] == 0){
                    check = true;
                    ++ops;
                    ++arr[i-1];
                    break;
                }
            }

        }
        if(ops > maxops){
            check = true;
            arr = arr2;

            while(check == true){
                check = false;

                for(int i=arr.size();i>0;i--){
                    if(arr[i-1] == 1){
                        check = true;
                        ++arr[i-1];
                        ++ops;
                        break;
                    }
                    if(arr[i] >= arr[i-1] && arr[i] % arr[i-1] == 0){
                        check = true;
                        ++ops;
                        ++arr[i];
                        break;
                    }
                }

            }


            for(auto it : arr){
                cout << to_string(it) + " ";
            }
        }

        cout << endl;

    }

    return 0;
}
