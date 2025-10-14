#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll count=0;
        ll c=0;
        ll t=(x-2*min(y, (x + y) / 3)+2)/3;
        count=2*((x+y)/3)- max(c,t);
        cout<<count<<endl;
    }
    
    return 0;
}