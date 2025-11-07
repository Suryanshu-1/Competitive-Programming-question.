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
    cout<<n<<" ";
    while(n !=1 ){
        if(n&1){
            n=3*n +1;
            cout<<n<<" ";
        }
        else{
            n = n/2;
            cout<<n<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}