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
        vll a(n);
        for (auto &at :a ) {
            cin>>at;
        }
        
        ll ans = a[n-1]-a[0];

        for (int i = 1; i < n; i++)
        {
            ans = max(ans,a[i]-a[0]);
        }
        for (int i = 0; i < n-1; i++)
        {
            ans=max(ans,a[n-1]-a[i]);
        }
        for (int i = 0; i < n-1; i++)
        {
            ans=max(ans,a[i]-a[i+1]);
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}