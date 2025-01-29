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


void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int tmp =target;
    vector<int>v;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==j)continue;
            else{
                int a=nums[i],b=nums[j];
                if(a+b==tmp){
                    //int a1=(int)a,b1=(int)b;
                    v.push_back(i);
                    v.push_back(j);
                    //cout<<a<<" "<<b<<endl;return v;
                }
            }
        }
    }
    return v;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int target=9,a=1;
    vector<int>nums={2,7,11,15};
    Solution solution;
    auto b=solution.twoSum(nums,target);
    
    for(auto x:b){
        cout<<x<<" ";
    }
}


////problem link: https://leetcode.com/problems/two-sum/