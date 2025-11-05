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
        ll a,b;
        cin>>a>>b;
        
        if(a!=b){
            cout<<a+b<<endl;
        }
        else{
            cout<<a+b-1<<endl;
        }
    }
    
    return 0;
}