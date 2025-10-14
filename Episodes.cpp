#include<bits/stdc++.h>
using namespace std ;
    
int main() {
    
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        long long c = a*b;
        cout<<c/60<<" ";
        cout<<c%60<<endl;
    }
    
    
    return 0;
}