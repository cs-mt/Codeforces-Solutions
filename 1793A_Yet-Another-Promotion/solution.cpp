// 2023-02-18 17:57 UTC+3 
// https://codeforces.com/problemset/problem/1793/A

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int64_t min_element(vector<int64_t> &nums){
  int64_t minimum = nums[0];

  for(auto it : nums){
    minimum = min(it, minimum);
  }

  return minimum;
}

int main(){
  int t;
  cin >> t; 

  while(t>0){
    --t;

    int64_t a,b;
    int64_t n,m;

    cin >> a;
    cin >> b;
    cin >> n;
    cin >> m;

    // Get maximum m_amount we can leverage.
    // Calculate remaining kilograms we need to buy.
    int64_t m_amount;
    int64_t remaining_required;

    // n: required kilograms
    // m: the amount we need to buy in order to get 1 extra.
    // m_amount: how many units of m kilograms we should buy in order to get the maximum promotion count.
    m_amount = n/(m+1);
    remaining_required = n-(m*m_amount)-(m_amount);

    if (remaining_required < 0) remaining_required = 0;

    // There are 3 possible spending situations. We need to calculate all of them and return the minimum one.

    // Calculate cost for leveraging maximum m_amount and buying the rest of the required on the second day.
    int64_t spent_1 = m*m_amount*a + remaining_required*b;
    
    // Calculate cost for leveraging maximum m_amount and buying the rest of the required on the same day.
    int64_t spent_2 = m*m_amount*a + remaining_required*a;

    // Calculate cost for buying all of the required on the second day.
    int64_t spent_3 = n*b;
   
    vector<int64_t> nums = {spent_1, spent_2, spent_3};

    int64_t min_spent = min_element(nums);

    cout << min_spent << endl;
  }
  return 0;
}
