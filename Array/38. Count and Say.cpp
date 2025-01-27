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
    string ans1(int a) {
      string s="1";
      for(int i=1;i<a;i++){
        char pre=s[0];
        string tmp,cnt_string;
        int cnt=1;
        for(int j=1;j<s.size();j++){
            if(pre==s[j]){
                cnt++;
            }
            else{
                while(cnt){
                    int tmp=cnt%10;
                    cnt/=10;
                    cnt_string+=char(48+tmp);
                }
                tmp+=cnt_string;
                tmp+=pre;
                pre=s[j];
                cnt=1;
                cnt_string.clear();
            }
        }
        //tmp+=pre;
        cout<<char(48+cnt)<<" "<<pre<<endl;
        while(cnt){
            int tmp=cnt%10;
            cnt/=10;
            cnt_string+=char(48+tmp);
        }
        cout<<cnt_string<<endl;
        reverse(cnt_string.begin(),cnt_string.end());
        cout<<cnt_string<<endl;

        tmp+=cnt_string;
        tmp+=pre;
        cnt=1;
        s=tmp;
        cout<<"A: "<<s<<endl;

      }
      return s;
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1,a=5;
    Solution solution;
    auto b=solution.ans1(a);
    cout<<b<<endl;
}

//// problem link: https://leetcode.com/problems/count-and-say/description/


// Count the consecutive number.Then convert into string and add the identical number.