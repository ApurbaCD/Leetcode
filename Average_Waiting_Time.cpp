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
 //   vector<vector<int>>customers={{1,2},{2,5},{4,3}};
    // vector<vector<int>>customers={{5,2},{5,4},{10,3},{20,1}};
    vector<vector<int>>customers={{2,3},{6,3},{7,5},{11,3},{15,2},{18,1}};
    int tmp=customers[0][0];
    int sum=0,l=customers.size();
    for(int i=0;i<l;i++){
        if(tmp<customers[i][0]){
            sum=sum+customers[i][1];
            tmp=customers[i][0]+customers[i][1];
            cout<<tmp-customers[i][0]<<endl;
            continue;
        }
        tmp=customers[i][1]+tmp;
        sum+=abs(tmp-customers[i][0]);
        cout<<tmp-customers[i][0]<<endl;
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
    cout<<((double)sum/l);

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}