#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    string s;
    cin>>s;
    vector<int>c(26,0);
    for (int i = 0; i < s.size(); i++)
    {
        c[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(c[i]==1){
            cout<<char('a'+i)<<endl;
        }
    }
    return 0;
}