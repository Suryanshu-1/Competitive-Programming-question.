#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vi a(n),b;
        for (auto &at :a ) {
            cin>>at;
        }
        sort(a.begin(),a.end());
        ll count = 1; 
		ll larl = 1;
		for (int i = 1; i < n; i++) 
		{
			if (a[i] - a[i - 1] <= k)
				count++; 
			else
				count = 1; 
                larl = max(larl, count);
		}
        cout<<n-larl<<endl;
    }
    
    return 0;
}