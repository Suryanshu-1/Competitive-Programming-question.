#include<bits/stdc++.h>
using namespace std ;
    
int main() {
    
    long long  t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        vector<long long >a(n);
        for(auto &at:a){cin>>at;}
        vector<long long >b=a;
        long long minm=LLONG_MAX;
        for (int i = 0; i < m; i++)
        {
            long long sum=0;
            for (int  i = 0; i < n; i++)
            {
                b[i]=b[i]+1;
                b[i]=b[i]%m;
                sum+=b[i];
            }
            
            minm=min(minm,sum);
        }
        
        cout<<minm<<endl;

    }
    return 0;
}