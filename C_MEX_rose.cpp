#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vi a(n);
        for (auto &at :a) {
            cin>>at;
        }
        vi b(n+1);
        ll count=0,miss=0;
        for (int i = 0; i < n; i++)
        {
            b[a[i]]++;
        }
        
        for (int i = 0; i < n; i++)
        {
            if(a[i]==k)miss++;
        }
        for (int i = 0; i < n+1; i++)
        {
            if(b[i]==0)count++;
        }
        
        cout<<max(miss,count)<<endl;
        
    }
    
    return 0;
}