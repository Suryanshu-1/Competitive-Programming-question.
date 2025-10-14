#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi= vector<long long>; 
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vi a(n);
        for (auto &at :a) {
            cin>>at;
        }

        ll ans=0;
        for (auto &at :a ) {
            ans^=at;
        }

        if(n&1){cout<<ans<<endl;}
        else if(!n&1 || ans==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}