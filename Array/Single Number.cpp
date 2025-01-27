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
    string ans1(vector<string>strs) {
        string s="";
        int n=strs.size();
        int t=0;
        while(1){
        for(int i=1;i<n;i++){
          //cout<<i<<endl;
            if(strs[i].size()<=t)return s;
            else if(strs[0].size()<=t)return s;
            else if(strs[0][t]!=strs[i][t])return s;
            
        }
        s.push_back(strs[0][t]);
        t++;
        }
        return s;
    }

};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    Solution solution;
    vector<string>strs={"dog","racecar","car"};
    string b=solution.ans1(strs);
    cout<<b<<endl;
}