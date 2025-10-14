#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);

    ll t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll sum=k*(k+1)/2;
        ll sum1=((n*(n+1))/2) - (((n-k)*(n-k+1))/2);
        if(sum1>=x  && sum<=x){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        
    }
    
    return 0;
}