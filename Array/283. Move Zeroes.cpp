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
        int n=nums.size(),j=0;
        vector<int>tmp(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]){
                tmp[j]=nums[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=tmp[i];
        }
        return nums;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums={0,1,0,3,12};
    Solution solution;
    auto b=solution.ans1(nums);
    for(auto x:b){
        cout<<x<<" ";
    }
    //cout<<b<<endl;
}

//https://leetcode.com/problems/move-zeroes/description/