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
    int ans1(vector<int>&nums){
      int n=nums.size(),c=1,tmp=0,pre=0;

      for(int i=0;i<n;i++){
        if(nums[i]>pre){
          tmp++;
          pre=nums[i];
        }
        else{
          c=max(c,tmp);
          tmp=1;
          pre=nums[i];
        }
      }
      c=max(c,tmp);
      return c;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={2,2,2,2,2};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}