#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vi a(n);
        for (auto &at :a) {
            cin>>at;
        }
        ll count=0;
        for (int i = 0; i < n; i++)
        {
           if(a[i]==2){count++;}
        }
        if(count&1){cout<<-1<<endl;}
        else{
            ll count2=0;

            for (int i = 0; i < n; i++)
            {
                if(a[i]==2){
                    count2++;
                }
                if(count2==count/2){
                    cout<<i+1<<endl;
                    break;
                }
            }
            
        }
        
    }
    
    return 0;
}