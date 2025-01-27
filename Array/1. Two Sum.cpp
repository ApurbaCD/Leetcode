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