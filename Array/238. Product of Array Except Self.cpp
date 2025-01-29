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
        int n=nums.size(),mx=0,c=0,pre;
        sort(nums.begin(),nums.end());
        pre=nums[0];
        for(int i=0;i<n;i++){
        
        }
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={100,4,200,1,3,2};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}