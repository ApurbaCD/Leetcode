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
    int ans1(vector<int>nums1,vector<int>nums2){
        int l1=nums1.size(),l2=nums2.size(),ans=0;
        if(l2%2!=0){
            for(int i=0;i<l1;i++){
                ans^=nums1[i];
            }
        }
        if(l1%2!=0){
            for(int i=0;i<l2;i++){
                ans^=nums2[i];
            }
        }
        return ans;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>nums1={2,1,3},nums2={10,2,5,0};
    //cin>>t;
    // while(t--){
    //     ans();
    // }
    Solution solution;
    auto b=solution.ans1(nums1,nums2);
    cout<<b<<endl;
}



//Explanation 


// I have to make all possible pair (every integer in nums1 is paired with every integer in nums2 exactly once).

//If nums2 have even numbers then one number of nums1 make even numbers of pair with nums2's numbers .Then xor in even numbers of pair
// give zero (one number is vanished from nums1).

//If nums2 have odd numbers then one number of nums1 make (1+even) numbers of pair with nums2's numbers .Now xor in even numbers of pair
// give zero and remain one number for odd(one number remain from nums1).

//If nums1 have even numbers then one number of nums2 make even numbers of pair with nums1's numbers .Then xor in even numbers of pair
// give zero (one number is vanished from nums2).

//If nums1 have odd numbers then one number of nums2 make (1+even) numbers of pair with nums1's numbers .Now xor in even numbers of pair
// give zero and remain one number for odd (one number remain from nums2).