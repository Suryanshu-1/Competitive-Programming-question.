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
        
        ll count2 = 0,count3 = 0;
        
        while(n>0 && n%3 == 0){
            count3 ++;
            n /= 3;
        }

        while(n > 0 && n%2 == 0){
            count2 ++;
            n /= 2;
        }
        
        if(n > 1 || count2 > count3){
            cout << -1 <<endl;
        }

        else{
            cout << count2 + 2*(count3 - count2) <<endl;
        }

    }
    
    return 0;
}