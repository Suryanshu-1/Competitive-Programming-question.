#include<bits/stdc++.h>
using namespace std ;
    
int main() {
    
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int minm=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minm=min(minm,abs(a[i]));
    }
    cout<<minm<<endl;
    
    
    return 0;
}