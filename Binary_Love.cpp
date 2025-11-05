#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        
        if(s[0]==s[n-1]){
            bool pos = false;
            if(s[0]=='1'){
                for (int i = 0; i < s.size(); i++)
                {
                    if(s[i]=='0'){pos=true;break;}
                }  
            }
            if(s[0]=='0'){
                for (int i = 0; i < s.size(); i++)
                {
                    if(s[i]=='1'){pos=true;break;}
                }
            }
            cout<<(pos?"Alice":"Bob")<<endl;
        }
        else{
            ll count0=0,count1=0;
            for (int i = 0; i < n; i++)
            {
                if(s[i]=='1'){count1++;}
                else{count0++;}
            }
            if(count0==count1){cout<<"Alice"<<endl;}
            else{cout<<"Bob"<<endl;}
        }
    }
    
    return 0;
}