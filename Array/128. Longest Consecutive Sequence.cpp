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
        int n=nums.size(),mx=0,c=1,pre;
        sort(nums.begin(),nums.end());
        pre=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==pre+1){
                pre=nums[i];
                c++;
            }
            else if(nums[i]==pre)continue;
            else{
                mx=max(mx,c);
                c=1;
                pre=nums[i];
            }
        }
        mx=max(mx,c);
        return mx;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={1,2,0,1};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}

// https://leetcode.com/problems/longest-consecutive-sequence/description/