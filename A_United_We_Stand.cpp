#include<bits/stdc++.h>
using namespace std ;
 
using ll=long long;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n),b,c;
        for(auto &at:a){
            cin>>at;
        }
        ll maxm=*max_element(a.begin(),a.end());

        for (int i = 0; i < n; i++)
        {
            if(a[i]!=maxm){b.push_back(a[i]);}
            else {c.push_back(a[i]);}
        }
        if(b.size()==0){cout<<-1<<endl;}
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto &bt:b){
                cout<<bt<<" ";
            }
            cout<<endl;
            for(auto &ct:c){
                cout<<ct<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}