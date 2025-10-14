#include<bits/stdc++.h>
using namespace std ;
    
int main() {
    
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        cin.ignore();
        string s;
        getline(cin,s);
        int choice =0;
        for (int i = 0; i < m; i++)
        {
            if(s[i]=='0'){choice--;}
            else if(s[i]=='1'){choice++;}
        }
        if((n-m) >= abs(choice) && (n-m - abs(choice)) % 2 == 0){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
        
    }   
    
    return 0;
}