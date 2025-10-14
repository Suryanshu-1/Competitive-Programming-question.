#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        if(a+b+2<=n || (a==b) && (b==n)){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
    
    return 0;
}