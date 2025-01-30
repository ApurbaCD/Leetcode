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
    vector<int> ans1(vector<int>nums) {
        int n=nums.size(),t=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1&&!t){
                t=i;break;
            }
        }
        for(int i=t+1;i<n;i++){
            if(nums[i]%2==0){
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<=t;i++)v.push_back(nums[i]);
        for(int i=t+1;i<n;i++){
            if(nums[i]%2==1)v.push_back(nums[i]);
        }
        return v;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={3,1,2,4};
    Solution solution;
    auto b=solution.ans1(nums);
    for(auto x:b)
    cout<<x<<" ";
}

//https://leetcode.com/problems/sort-array-by-parity/description/