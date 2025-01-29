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
        int n=nums.size(),mx=nums[0],curr=0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            mx=max(mx,curr);
            if(curr<0)curr=0;
            //cout<<mx<<" "<<curr<<endl;
        }
        return mx;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={-1,-2};
    Solution solution;
    auto b=solution.ans1(nums);
    cout<<b<<endl;
}

//https://leetcode.com/problems/maximum-subarray/description/

//After adding nums[i] if i get positive value that help to maximize sum.On th other hand if 
//get negative value then current sequences is not maximize the total sum.If all the number 
//is negative then the maximum getting part help to get the lowest negative number 