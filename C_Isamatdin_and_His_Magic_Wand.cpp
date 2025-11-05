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
        ll n ;
        cin >> n;
        vll a(n);
        bool even= false,odd=false;
        for (int i = 0; i<n;i++){
            cin >>a[i];
            if(a[i]&1)odd = true;
            else even = true;
        }

        if(odd && even){
            sort(a.begin(),a.end());
        }

        for (auto &at :a ) {
            cout<<at<<" ";
        }

        cout<<endl;
    }
    
    return 0;
}