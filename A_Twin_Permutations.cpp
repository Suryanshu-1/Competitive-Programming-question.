#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n),b;
        for (auto &at:a) {
            cin>>at;
            b.push_back(n-at+1);
        }
        for (auto &bt:b) {
            cout<<bt<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}