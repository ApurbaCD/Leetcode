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
    vector<vector<int>> ans1(vector<vector<int>>matrix){
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>tmp(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                tmp[i][j]=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(tmp[i][j]==0){
                    for(int v=0;v<m;v++)matrix[i][v]=0;
                    for(int h=0;h<n;h++)matrix[h][j]=0;
                }
            }
        }
        return matrix;
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    //vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>>matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    Solution solution;
    auto b=solution.ans1(matrix);
    for(auto x:b){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

//https://leetcode.com/problems/set-matrix-zeroes/