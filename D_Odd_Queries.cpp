#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vi a(n);
        for (auto &at :a ) {
            cin>>at;
        }
        
        ll oldsum=0;
        for (int i = 0; i < n; i++)
        {
            oldsum+=a[i]; 
        }
        
        vi prefixsum(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            prefixsum[i]=prefixsum[i-1]+a[i-1];
        }
        while (q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            ll sumtosub=prefixsum[r]-prefixsum[l-1];
            ll sumtoadd=(r-l+1)*k;
            ll newsum=oldsum-sumtosub+sumtoadd;
            if(newsum&1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
        
    }
    
    return 0;
}