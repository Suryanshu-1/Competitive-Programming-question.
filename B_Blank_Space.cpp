#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for (auto &at :a) {
            cin>>at;
        }
        ll cnt=0,ans=0;
        for (auto &at:a)
        {
            if(at==0){
                cnt++;
                ans=max(cnt,ans);
            }
            else{
                ans=max(cnt,ans);
                cnt=0;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}