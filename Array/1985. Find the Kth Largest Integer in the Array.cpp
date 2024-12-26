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
    string ans1(vector<string>&nums,int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int k=n-1;
            for(int j=i+1;j<=((i+n)/2)&&n-1;j++){
                int l1=nums[i].size(),l2=nums[j].size();    
                if(l1<l2)swap(nums[i],nums[j]);
                else if(l1==l2){
                    if(nums[i]<nums[j])swap(nums[i],nums[j]);
                }

                if(k>=j){
                    l1=nums[i].size();
                    int l3=nums[k].size();
                    if(l1<l3)swap(nums[i],nums[k]);
                    else if(l1==l3){
                        if(nums[i]<nums[k])swap(nums[i],nums[k]);
                    }
                    k--;
                }

            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<nums[i]<<" ";
        // }
        return nums[k-1];
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1,k=2;
    vector<string>nums={"21","2","12","982"};
    //cin>>t;
    // while(t--){
    //     ans();
    // }
    Solution solution;
    auto b=solution.ans1(nums,k);
   cout<<b<<endl;
}