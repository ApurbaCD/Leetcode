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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        vector<int>tmp(n+1,0);
        for(int i=0;i<n;i++){
            tmp[nums[i]]=1;
        }
        for(int i=1;i<=n;i++){
            if(!tmp[i])v.push_back(i);
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        return v;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={4,3,2,7,8,2,3,1};
    Solution solution;
    auto b=solution.findDisappearedNumbers(nums);
    for(auto x:b){
        cout<<x<<" ";
    }
}

////problem link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/