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


int ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<int>nums={16,13,10,0,0,0,10,6,7,8,7};
    int n=nums.size(),ans=0;
    vector<int>dp(n+1,0);
    for(int i=0;i<n;i++){
        dp[i+1]=dp[i]+nums[i];
    }
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            if(abs(dp[i+1]-(dp[n]-dp[i+1]))==1)ans+=1;
            else if(dp[i+1]==(dp[n]-dp[i+1]))ans+=2;
        }
    }
    cout<<ans<<endl;
    return ans;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}