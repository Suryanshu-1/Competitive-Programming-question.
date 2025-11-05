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
        for (auto & at : a) {
            cin>>at;
        }
        map<ll,ll>mpp;
        mpp[1]=0;
        mpp[0]=0;
        for (int i = 0; i < n; i++)
        {
            mpp[a[i]]++;
        }
        ll ans=0;
        ans = mpp[1]*pow(2,mpp[0]);
        
        cout<<ans<<endl;
        
    }
    
    return 0;
}