#include <bits/stdc++.h>
using namespace std;


#define ll         long long int 
#define ld         long double
#define all(a)     (a).begin(), (a).end()
#define vec        vector<long long int>
#define sort1(v)   sort(v.begin(),v.end())
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;




class Solution {
public:
    int ans1(vector<int>nums) {
      map<int,int>mp;
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(nums[i]>0)
        mp[nums[i]]++;
      }
      int k=1;
      while(k){
        if(!mp[k])return k;
        k++;
      }
      return k;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={7,8,9,11,12};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}