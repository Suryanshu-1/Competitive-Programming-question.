#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
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
        ll count0=0,countm=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){count0++;}
            else if(a[i]==-1){countm++;}
        }
        ll ans=0;
        ans+=count0;
        if(countm&1){ans+=2;}
        cout<<ans<<endl;
        
    }
    
    return 0;
}