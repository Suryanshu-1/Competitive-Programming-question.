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

        ll ans = a[0];
        for (int i = 1; i < n; i++)
        {
            ans&=a[i];
        }
        cout << ans << endl;

    }
    
    return 0;
}