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
    int ans1(int a) {
        vector<int>v;
        if(a<0)return 0;
        while(a){
            v.push_back(a%10);
            a=a/10;
        }
        int n=v.size();
        for(int i=0;i<(n/2);i++){
            if(v[i]!=v[n-1-i])return 0;
        }
        return 1;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1211;
    //cin>>t;
    // while(t--){
    //     ans();
    // }
    Solution solution;
    auto b=solution.ans1(a);
    cout<<b<<endl;
}