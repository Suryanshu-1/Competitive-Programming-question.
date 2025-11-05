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
        for (auto &at :a) {
            cin>>at;
        }
        ll maxm=0;
        for (int i = 0; i < n; i++)
        {
            maxm=max(maxm,a[i]);
        }
        cout<<maxm<<endl;
        

    }
    
    return 0;
}