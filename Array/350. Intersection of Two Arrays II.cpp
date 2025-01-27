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
    vector<int> ans1(vector<int>nums1,vector<int>nums2) {
      int n1=nums1.size(),n2=nums2.size();
      vector<int>ans;
      map<int,int>mp1,mp2;
      for(int i=0;i<n1;i++){
        mp1[nums1[i]]++;
      }
      for(int i=0;i<n2;i++){
        mp2[nums2[i]]++;
      }
      for(int i=0;i<n1;i++){
        if(mp1[nums1[i]]&&mp2[nums1[i]]){
            mp1[nums1[i]]--;
            mp2[nums1[i]]--;
            ans.push_back(nums1[i]);
        }
      }
      return ans;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums1={4,9,5},nums2={9,4,9,8,4};
    Solution solution;
    auto b=solution.ans1(nums1,nums2);
    for(auto x:b){
        cout<<x<<" ";
    }
    
}



/////https://leetcode.com/problems/intersection-of-two-arrays-ii/description/