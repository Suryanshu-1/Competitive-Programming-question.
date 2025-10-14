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
        vi a(n);
        for (auto &at :a) {
            cin>>at;
        }
        sort(a.begin(),a.end());
        ll ans=0;
        for (int i = 1; i < n; i+=2)
        {
            ll dif =abs(a[i]-a[i-1]);
            ans=max(dif,ans);
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}