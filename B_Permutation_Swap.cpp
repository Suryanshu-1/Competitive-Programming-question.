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
        ll n ;
        cin>>n;
        vll a(n);
        for (auto &at :a ) {
            cin>>at;
        }

        ll k = abs(a[0] - 1);
		for (int i = 1; i < n; i++) 
		{
			k = __gcd(k, abs(a[i] - (i + 1)));
		}

        cout << k << endl;
    }
    
    return 0;
}