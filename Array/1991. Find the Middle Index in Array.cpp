#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long int 
//#define vec             vector<int>

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