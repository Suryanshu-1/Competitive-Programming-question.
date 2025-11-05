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
        ll n,k;
        cin>>n>>k;
        vll a(n*k);
        for (auto &at :a ) {
            cin>>at;
        }   
        ll mediumsum=0;

        int i = (n*k)-1;
        while(k--){
            i-=(n/2);
            mediumsum+=a[i];
            i--;
        }
        cout << mediumsum << endl;
    }
    
    return 0;
}