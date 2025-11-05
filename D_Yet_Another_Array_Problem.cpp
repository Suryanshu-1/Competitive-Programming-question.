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


        ll g = a[0];
        for (int i = 0; i < n; i++)
        {
            g= __gcd(g,a[i]);
        }

        ll i = 2;
        while(i <= a[n-1]+1){
            if((__gcd(i,g) == 1) ){
                break;
            }
            i++;
        }
        cout << i << endl;
    }
    
    return 0;
}