#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
    
int main() {
    ios::sync_with_stdio(false);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        vll a(26,0),b(26,0);

        for (int i = 0; i < n; i++)
        {
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
        }
        bool love = true;
        for (int i = 0; i < 26; i++)
        {
            if(a[i] != b[i]){
                love = false;
                break;
            }
        }
        cout<<(love?"YES":"NO")<<endl;
        
        
    }
    
    return 0;
}