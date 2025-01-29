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