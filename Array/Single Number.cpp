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