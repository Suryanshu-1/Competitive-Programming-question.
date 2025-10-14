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
        if(n%6==1 || n%6==3 || !(n/6)){
            int count=0;
            while(n>=6){
                n=n/6;
                count++;
            }
            if(n==3){
                count+=2;
            }
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}