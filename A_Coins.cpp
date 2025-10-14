#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(!(n&1) || !((n-k)&1)){            
                cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}