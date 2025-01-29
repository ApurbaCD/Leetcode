#include <bits/stdc++.h>
using namespace std;


#define ll         long long int 
#define ld         long double
#define all(a)     (a).begin(), (a).end()
#define vec        vector<long long int>
#define sort1(v)   sort(v.begin(),v.end())
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



class Solution {
public:
    int ans1(string s) {
    int ans=0;
    vector<int>r(128);

    r['I']=1;
    r['V']=5;
    r['X']=10;
    r['L']=50;
    r['C']=100;
    r['D']=500;
    r['M']=1000;

    for(int i=0; i+1<s.length();i++)
      if(r[s[i]]<r[s[i+1]])
        ans-=r[s[i]];
      else
        ans+=r[s[i]];

    return ans+r[s.back()];   
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    string s="III";
    Solution solution;
    auto b=solution.ans1(s);
    cout<<b<<endl;
}

//// https://leetcode.com/problems/roman-to-integer/description/