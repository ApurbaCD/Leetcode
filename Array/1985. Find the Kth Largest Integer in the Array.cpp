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
    string ans1(vector<string>&nums,int k) {
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int k=n-1;
        //     for(int j=i+1;j<=((i+n)/2)&&n-1;j++){
        //         int l1=nums[i].size(),l2=nums[j].size();    
        //         if(l1<l2)swap(nums[i],nums[j]);
        //         else if(l1==l2){
        //             if(nums[i]<nums[j])swap(nums[i],nums[j]);
        //         }

        //         if(k>=j){
        //             l1=nums[i].size();
        //             int l3=nums[k].size();
        //             if(l1<l3)swap(nums[i],nums[k]);
        //             else if(l1==l3){
        //                 if(nums[i]<nums[k])swap(nums[i],nums[k]);
        //             }
        //             k--;
        //         }

        //     }
        // }
        // for(int i=0;i<n;i++){
        //     cout<<nums[i]<<" ";
        // }
        sort(nums.begin(),nums.end(),[](string s1,string s2){
            int l1=s1.size(),l2=s2.size();
            if(l1>l2)return 1;
            else if(l1<l2)return 0;
            else{
                for(int i=0;i<l1;i++){
                    if(s1[i]<s2[i])return 0;
                    else if(s1[i]>s2[i]) return 1;
                }
                return 1;
            }
        });
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        endline;
        //cout<<nums[k-1]<<endl;
        return nums[k-1];
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1,k=4;
    vector<string>nums={"3","6","7","10"};
    Solution solution;
    auto b=solution.ans1(nums,k);
    cout<<b<<endl;
}