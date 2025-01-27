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
    vector<bool>dp(n,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        if(dp[i]){
            for(int j=i+1;j<n&&j<=i+nums[i];j++){
                dp[j]=1;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<dp[i]<<" ";
    // }
    //endline;
    if(dp[n-1]){
        cout<<"true\n";
        return 1;
    }
    cout<<"no\n";
    return 0; 
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={2,3,1,1,4};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}



//https://leetcode.com/problems/jump-game/description/