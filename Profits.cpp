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
        ll n,x;
        cin>>n>>x;
        
        ll ans = 0;

        while(n>=x){
            ans+=n-x;
            n--;
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}