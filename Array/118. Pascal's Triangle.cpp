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
    vector<vector<int>> ans1(int numRows) {
        vector<vector<int>>v={{1}};
        vector<int>tmp;
        for(int i=0;i<numRows-1;i++){
            tmp.push_back(1);
            for(int j=0;j<v[i].size()-1;j++){
                tmp.push_back(v[i][j]+v[i][j+1]);
            }
            tmp.push_back(1);
            v.push_back(tmp);
            tmp.clear();
        }
        return v;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1,numRows=5;
    vector<int>nums={100,4,200,1,3,2};
    Solution solution;
    auto b=solution.ans1(numRows);
    for(auto x:b){
        for(auto y:x){
            cout<<y<<" ";
        }
        endline;
    }
}

//https://leetcode.com/problems/pascals-triangle/description/