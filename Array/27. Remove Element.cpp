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
    int ans1(vector<int>nums,int val) {
        vector<int>tmp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                tmp.push_back(nums[i]);
            }
        }
        nums=tmp;
        return nums.size();
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1,val=2;
    vector<int>nums={0,1,2,2,3,0,4,2};
    Solution solution;
    auto b=solution.ans1(nums,val);
    cout<<b<<endl;
}

