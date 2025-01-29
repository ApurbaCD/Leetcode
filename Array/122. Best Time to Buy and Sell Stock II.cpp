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