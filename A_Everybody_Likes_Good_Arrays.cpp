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
        for (auto &at :a ) {
            cin>>at;
        }
        int count =0;
        int i=1;
        ll l=a[0];
        while(i<n){
            if(l&1 && a[i]&1){
                count++;
                l=a[i];
            }
            else if(!(l&1) && !(a[i]&1)){
                count++;
                l=a[i];
            }
            else{
                l=a[i];
            }
        i++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}