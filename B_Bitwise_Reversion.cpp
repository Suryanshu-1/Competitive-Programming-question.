#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll x,y,z;
        cin>>x>>y>>z;
         if ( (x&y&~z) || (x&z&~y) || (y&z&~x) )
            cout<< "NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    
    return 0;
}