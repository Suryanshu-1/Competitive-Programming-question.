#include<bits/stdc++.h>
using namespace std ;
    
int main() {
    long long t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n,m;
        cin>>n>>m;
        cin.ignore();
        string sub,s;
        getline(cin,sub);
        getline(cin,s);
        int count=0;
        int k =6;
        while (k--)
        {
            if(sub.find(s)!=string::npos){
                cout<<count<<endl;
                break;
            }
            else {
            sub+=sub;
            count++;
            }
        }
        if(sub.find(s)==string::npos){
                cout<<-1<<endl;
            }

    }
    return 0;
}