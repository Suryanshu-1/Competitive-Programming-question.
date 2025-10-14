#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll n,q;
    cin>>n>>q;
    map<ll,ll>mpp;
    for (int i = 1; i <= n; i++)
    {
        mpp[i]=1;
    }
    while(q--){
        ll x,y;
        cin>>x>>y;
        ll ans=0;
        auto it=mpp.begin();
        while(it!=mpp.end() && it->first <=x){
            ans+=it->second;
            mpp[y]+=it->second;
            it=mpp.erase(it);
        }
        cout<<ans<<endl;
    }
    return 0;
}