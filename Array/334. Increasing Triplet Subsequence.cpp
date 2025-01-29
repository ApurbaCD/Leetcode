#include <bits/stdc++.h>
using namespace std;


#define ll         long long int 
#define ld         long double
#define all(a)     (a).begin(), (a).end()
#define vec        vector<long long int>
#define sort1(v)   sort(v.begin(),v.end())
#define endline    cout<<"\n";
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


class Solution {
public:
    int ans1(vector<int>nums){
      int n=nums.size();
      vector<int>mn(n),mx(n);
      mn[0]=nums[0];
      for(int i=1;i<n;i++){
        mn[i]=min(nums[i],mn[i-1]);
      }
      mx[n-1]=nums[n-1];
      for(int i=n-2;i>=0;i--){
        mx[i]=max(mx[i+1],nums[i]);
      }
      for(int i=1;i<n;i++){
        if(mn[i]<nums[i]&&nums[i]<mx[i]){
          return true;
        }
      }
      return false;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={5,6,4,7,3,2,1};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}

// Tushar Kashyap
// suppose there is a NUMS[i]....think in that way what if we already know the smallest number in between 0 to i th index and greatest number in between n-1 to i th index.
// And we know this for every index in nums array
// Now we have to just iterate over nums and check that the curr number is not equal to smallest number till that index and also it is not equal to the greatest number till that index....in that case just return TRUE
// and return False if we iterate over nums array and we didn't find any index that supports the condition!

// 1 --> Keep track of smallest number till the i th index from the starting ( do this for every index value )
// 2 --> keep track of greater number till the i th index from the last ( do this for every index value )
// 3 --> check for every index value

// nums[i] != smallest till now from the start && nums[i] != greatest till now from the last
// if it matches then return true
// otherwise in the last return false

//// https://leetcode.com/problems/increasing-triplet-subsequence/description/