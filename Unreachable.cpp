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
        vi a(n),b;
        for (auto &at :a) {
            cin>>at;
        }
        ll count2=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==2){
                for (int j = 0; j < n; j++)
                {
                    if(a[j]==1){
                        count2++;
                        break;
                    }
                }
                
            }
        }
        cout<<(count2?"Yes":"No")<<endl;
        
        
    }
    
    return 0;
}