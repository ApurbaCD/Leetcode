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
      int n=nums.size();
      vector<int>check(n+2,0);
      for(int i=0;i<n;i++){
        check[nums[i]]++;
        if(check[nums[i]]==2)return nums[i];
      }
      return 0;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={1,3,4,2,2};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}