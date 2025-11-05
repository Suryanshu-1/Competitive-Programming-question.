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
        map<ll,ll>mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[a[i]]++;
        }
        ll k=0;
        for(auto it:mpp){
            k=max(k,it.second);
        }
        ll count=0;
        while(k<n){
            count++;
            if(k*2<n){
                count+=k;
                k*=2;
            }
            else{
                count+=n-k;
                k=n;
            }

        }
        cout<<count<<endl;
    }
    
    return 0;
}