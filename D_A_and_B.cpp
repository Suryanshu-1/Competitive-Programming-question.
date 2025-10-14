#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll ans=0;
        ll counta=0,countb=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='a')counta++;
            else{countb++;}
        }
        
        for (int i = 0; i < n-2; i++)
        {
            int k=i,l=i+1,m=i+2;
            
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}