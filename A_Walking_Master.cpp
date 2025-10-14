#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll ans=0;
        if(b>d || (b==d && c>a)){
            ans=-1;
        }
        else{
            while(b<d){
                a++;b++;
                ans++;
            }
            while(a>c){
                a--;
                ans++;
            }
        }
        if(b>d || (b==d && c>a)){
            ans=-1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}