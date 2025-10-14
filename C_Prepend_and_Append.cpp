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
        string s;
        ll ans=n;
        cin>>s;
        int left=0,right=n-1;
        while(left<=right){
            if(s[left]!=s[right]){
                ans-=2;
            }
            else{
                break;
            }
            left++;
            right--;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}