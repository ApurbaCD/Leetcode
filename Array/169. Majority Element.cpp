#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long int 
//#define vec             vector<int>
//copy from Mrinal da
#define vec               vector<ll>
#define vsort(v)          sort(v.begin(),v.end())
#define endline           cout<<"\n"
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define loop(i,a,b)       for(ll i=a;i<=b;i++)
#define loop1(i,a,b)      for(ll i=a;i>=b;i--)
const ll siz=2e5+7;
const ll INF=__LONG_LONG_MAX__;




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