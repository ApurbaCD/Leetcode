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
    int ans1(vector<int>prices){
      int pre=prices[0],mx=prices[0],sum=0,n=prices.size();
      for(int i=1;i<n;i++){
        if(prices[i]>pre){
            sum+=prices[i]-pre;
            pre=prices[i];
        }
        else{
            pre=prices[i];
        }
      }
      return sum;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>prices={7,1,5,3,6,4};
    Solution solution;
    auto b=solution.ans1(prices);
    cout<<b<<endl;
}




//// problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/