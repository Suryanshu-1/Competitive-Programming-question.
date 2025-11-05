#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
    
int main() {
    ios::sync_with_stdio(false);
    ll s,a,b,x;
    cin>>s>>a>>b>>x;
    ll ans=0;
    while(x>a){
        ans+=s*(a);
        x-=(a+b);
    }
    while(x>0){
        ans+=s*x;
        x-=a+b;
    }
    cout<<ans<<endl;
    
    return 0;
}