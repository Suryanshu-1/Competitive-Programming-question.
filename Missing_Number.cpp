#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll n;
    cin>>n;
    vll a(n-1);
    for (auto &at :a ) {
        cin>>at;
    }  

    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        if(a[i] != i+1){
            cout<<i+1<<endl;
            break;
        }
    }
    

    
    
    
    return 0;
}