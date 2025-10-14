#include<bits/stdc++.h>
using namespace std ;
using ll=long long ;


int main() {
    std::ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        vector<ll>a(3);
        for(auto&at:a){
            cin>>at;
        }
        ll aan=0,kat=0;
        if(a[2]&1){aan++;}
        aan+=a[0];
        kat+=a[1];
        if(aan>kat){cout<<"First"<<endl;}
        else{cout<<"Second"<<endl;}
    }
    
    return 0;
}