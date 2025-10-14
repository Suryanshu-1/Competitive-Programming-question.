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
        cin>>s;
        int count=1,lar=1;
        for (int i=1;i<n;i++)
        {
            if(char(s[i])==char(s[i-1])){count++;}
            else{
                lar=max(count,lar);
                count=1;
            }
            
        }
        lar=max(count,lar);
        cout<<lar+1<<endl;
        
    }
    
    return 0;
}