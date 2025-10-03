#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int a2=(c-a);
        int b2=(d-b);
        int flag1,flag2;
        int ca=a,cb=b,cc=a2,cd=b2;
        a=max(ca,cb);
        b=min(ca,cb);
        a2=max(cc,cd);
        b2=min(cc,cd);
        if(a>2*b+2)flag1=false;
        else flag1=true;
        if(a2>2*b2+2)flag2=false;
        else flag2=true;
        if(flag1&&flag2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}