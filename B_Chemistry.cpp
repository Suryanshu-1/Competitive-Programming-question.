#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mpp;
        for (auto &st :s ) {
            mpp[st]++;
        }
        int count =0;
        for(const auto& it:mpp){
            if(it.second&1){
                count ++;
            }
        }
        count-=k;
        if((n-k & 1) && (count <2) || (!(n-k & 1)&&count <1)){
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
    
    return 0;
}