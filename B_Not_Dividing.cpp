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

        for (int i = 0; i < n; i++)
        {
            if(a[i]==1){a[i]++;}
            
        }
        for (int i = 0; i < n-1; i++)
        {
            if(a[i+1]%a[i]==0){a[i+1]++;}
        }
        
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        
        
    }
    
    return 0;
}