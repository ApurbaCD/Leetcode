#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long int 
//#define vec             vector<int>
//copy from Mrinal da
#define vec               vector<ll>
#define vsort(v)          (v.begin(),v.end())
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
    //string word1,word2,s1,s2,s3,s;
    //queue<string>dp;
    //dp.push(word1);
    // while(!dp.empty()){
    //     int i=0,ii=0;
    //     s=dp.front();
    //     dp.pop();
    //     for(i=0;i<s.size()&&i<word2.size();i++){
    //         if(s[i]!=word2[i]){ 
    //             s1=
    //             s2=
    //             ii=1;break; }
    //     }


    // }
    vector<string>logs = {"../","./","../","../","./","l/"};
    int l=0,n=logs.size();
        string s1="../",s2="./";
        for(int i=0;i<n;i++){
            if(logs[i]=="../"){
                if(l>=1)l--;
            }
            else if(logs[i]=="./"){

            }
            else{
                l++;
            }
        }
    cout<<l;
   // cout<<dp[1]<<endl;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}