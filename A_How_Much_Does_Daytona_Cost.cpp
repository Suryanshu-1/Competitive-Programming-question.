#include<bits/stdc++.h>
using namespace std ;
    
int main() {
    
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long >a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        bool cnt=false;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==k){cnt=true;}
        }
        cout<<(cnt?"YES":"NO")<<endl;
        
        
    }
    
    return 0;
}