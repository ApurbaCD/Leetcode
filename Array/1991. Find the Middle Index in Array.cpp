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
    int ans1(vector<int>&nums) {
      int n=nums.size();
      if(n==1)return 0;
      if(n<3)return 0;
      //cout<<n<<endl;
      vector<int>psum(n+1,0);
      for(int i=0;i<n;i++){
        psum[i+1]=psum[i]+nums[i];
      } 
      for(int i=2;i<n;i++){
       // cout<<psum[i-1]<<" "<<psum[n]-psum[i]<<endl;
        if(psum[i+1]==(psum[n]-psum[i])){
          //cout<<psum[i-1]<<" "<<psum[n]-psum[i]<<endl;
          return i;
        }
      }
      return -1;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={2,3,-1,8,4};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}