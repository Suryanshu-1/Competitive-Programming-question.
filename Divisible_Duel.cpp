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
        ll l,r;
        cin>>l>>r;
        ll i=l;
        ll sumodd=0,sumeven=0;
        while(i<=r){
            if(i&1){sumodd+=i;}
            else{sumeven+=i;}
            i+=l;
        }
        if(sumeven>=sumodd){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    
    return 0;
}