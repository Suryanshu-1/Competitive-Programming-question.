#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll cnt=0;
        if(k>n/2){cout<<n-k<<endl;}
        else {
            k=n-k+1;
            if(k>n/2){cout<<n-k+1<<endl;}
        }
        
    }
    
    return 0;
}