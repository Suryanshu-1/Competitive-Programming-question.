#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
    
int main() {
    ios::sync_with_stdio(false);
    
    string x,y;
    cin>>x>>y;
    bool count=false;
    if(x==y){count=true;}
    else{
        if(y=="Ocelot"){count=true;}
        else if(y=="Serval" && x!="Ocelot"){count=true;}
    }
    cout<<(count?"Yes":"No")<<endl;
    
    return 0;
}