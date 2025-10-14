#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for (auto &at :a) {
            cin>>at;
        }
        ll num=0;
        if(is_sorted(a.begin(),a.end())){
              ll dif=LLONG_MAX;
              for (int i = 1; i < n; i++)
              {
                dif=min(dif,a[i]-a[i-1]);
              }
              while(dif>-1){dif-=2;num++;}
              
        }
        cout<<num<<endl;
    }
    
    
    return 0;
}