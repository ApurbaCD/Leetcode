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
    int ans1(vector<int>derived){
      int n=derived.size(),ans=0,sum=0,sum1=0,sum2=0,j=0,k=n;
      if(n==1){
        if(derived[0]==1)return 0;
        return 1;
      }
      if(derived[0]){
        for(int i=0;i<n;i++){
            if(derived[i]){
                sum1++;
                j=i;
            }
            else break;
        }
      }
      if(derived[n-1]){
        for(int i=n-1;i>=0;i--){
            if(derived[i]){
                sum1++;
                k=i;
            }
            else break;
        }
      }
      if(sum1>=n){
        if(n%2==0)return 1;
        return 0;
      }
      if(sum1%2!=0)return 0;
       for(int i=j+1;i<k;i++){
            if(derived[i]==0){
                if(sum%2==0)sum=0;
                else{
                    ans=0;return 0;
                }
            }
            else{
                sum++;
            }
       }
       if(sum%2==0)return 1;
       return 0;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<int>derived={1,1,0};
    //cin>>t;
    // while(t--){
    //     ans();
    // }
    Solution solution;
    auto b=solution.ans1(derived);
    cout<<b<<endl;
}