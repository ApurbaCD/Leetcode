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
    int ans1(vector<string>&operations) {
 int n=operations.size(),sum=0;
      stack<int>stk;
      for(int i=0;i<n;i++){

        if(operations[i]=="+"){
            int tmp1=stk.top();stk.pop();
            int tmp2=stk.top();stk.push(tmp1);
            stk.push(tmp1+tmp2);
            
        }
        else if(operations[i]=="D"){
            int tmp1=stk.top();
            stk.push(tmp1*2);
        }
        else if(operations[i]=="C"){
            stk.pop();
        }
        else{
            int digits=0,tmp=10,digit;
            for(int j=0;j<operations[i].size();j++){
                if(operations[i][j]>='0'&&operations[i][j]<='9'){
                    digit=(int)operations[i][j]-'0';
                    digits*=tmp;
                    digits+=digit;
                }
            }
            if(operations[i][0]=='-')digits*=-1;
            //cout<<digits<<" "<<operations[i]<<endl;
            stk.push(digits);
        }
      }
      while(stk.size()){
        cout<<stk.top()<<endl;
        sum+=stk.top();
        stk.pop();
      }
      return sum;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=1;
    vector<string>operations={"5","-2","4","C","D","9","+","+"};
    Solution solution;
    auto b=solution.ans1(operations);
    cout<<b<<endl;
}