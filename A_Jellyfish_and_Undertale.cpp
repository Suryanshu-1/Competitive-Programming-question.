#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vi c(n);
        for (auto &ct :c ) {
            cin>>ct;
        }
        ll ans=b;
        for (int  i = 0; i < n; i++)
        {
            if(c[i]<a)ans+=c[i];
            else ans+=a-1;
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}