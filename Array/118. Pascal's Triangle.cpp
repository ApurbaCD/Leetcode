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