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
        while(!(n&1)){
            n=n>>1;
        }
        if(n>1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    
    return 0;
}