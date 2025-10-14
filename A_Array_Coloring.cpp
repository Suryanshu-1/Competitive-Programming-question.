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
        ll sum=0;
        for (auto &at :a) {
            sum+=at;
        }
        cout<<((sum&1)?"NO":"YES")<<endl;

    }
    
    return 0;
}