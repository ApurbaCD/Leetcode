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
    vector<int> ans1(vector<int>nums) {
        int n=nums.size(),mul=1,num_zero=0,index=-1;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                num_zero++;
                index=i;
                continue;
            }
            mul*=nums[i];
        }

        if(num_zero>1){
            for(int i=0;i<n;i++)v[i]=0;
            return v;
        }

        if(num_zero==1){
            for(int i=0;i<n;i++){
                if(i==index)v[i]=mul;
                else
                v[i]=0;
            }
            return v;
        }
        
        for(int i=0;i<n;i++){
            v[i]=mul/nums[i];
        }
        return v;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={-1,1,0,-3,3};
    Solution solution;
    auto b=solution.ans1(nums);
    for(auto x:b)
    cout<<x<<" ";
}

//https://leetcode.com/problems/product-of-array-except-self/description/