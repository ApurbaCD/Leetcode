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
    vector<int> ans1(vector<int>nums1,int m,vector<int>nums2,int n) {

        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(),nums1.end());
        return nums1;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1,m=3,n=3;
    vector<int>nums1={1,2,3,0,0,0},nums2={2,5,6};
    Solution solution;
    auto b=solution.ans1(nums1,m,nums2,n);
    for(auto x:b){
        cout<<x<<" ";
    }
}

//https://leetcode.com/problems/merge-sorted-array/submissions/1522979676/