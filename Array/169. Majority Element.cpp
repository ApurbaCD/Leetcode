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
    int ans1(vector<int>nums) {
      map<int,int>mp;
      int n=nums.size();
      int n1=n/2;
      for(int i=0;i<n;i++){
        mp[nums[i]]++;
      }
      for(auto x:mp){
        if(x.second>n1)return x.first;
      }
      return 0;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={3,2,3};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}

// https://leetcode.com/problems/majority-element/description/