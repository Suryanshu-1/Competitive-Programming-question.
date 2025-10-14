#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
 

int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n=s.size();
        if(s[0]!=s[n-1]){
            if(s[0]=='a'){
                s[0]='b';
            }
            else{s[0]='a';}
        }
        cout<<s<<endl;
    }
    
    return 0;
}