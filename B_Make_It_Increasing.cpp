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
        vi a(n,0);
        for (auto &at :a) {
            cin>>at;
        }
        
        ll count=0;
        
		for (int i = n - 2; i >= 0; i--) 
		{
			while (a[i]>=a[i+1]) 
			{
				count++;
				a[i]=a[i]/2; 
				if (a[i] == 0) 
					break;
			}
			if (a[i]==0&&a[i+1]==0) 
			{
                count=-1;
				break;
			}
		}
        cout<<count<<endl;
    }
    
    return 0;
}