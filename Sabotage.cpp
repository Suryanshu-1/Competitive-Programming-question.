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
        ll n,x,k;
        cin>>n>>x>>k;
        vll a(n);
        for (auto &at :a) {
            cin>>at;
        }
        sort(a.begin(),a.end());
       
        ll t=n-1; 
        while(k>0 && t>=0){
            a[t]=0;
            t--;
            k--;
            x+=100;
        }
        ll rank=1;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>x){rank++;}
        }
        cout<<rank<<endl;
    }
    return 0;
}