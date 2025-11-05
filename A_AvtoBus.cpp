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
        if(n&1 || n<4)cout<<-1<<endl;
        else{
            ll minm =0,maxm=0;
            minm+=(n/6);
            if(n%6!=0){minm++;}
            maxm+=(n/4);
            cout<<minm<<" "<<maxm<<endl;
        }
    }
    
    return 0;
}