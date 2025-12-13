#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int a , b;
    cin>>a>>b;
    int copy=b;
    int copya=a;
    int totalsteps=INT_MAX;
    if(b==1)b++;
    while(b<=copy+30){
        int count=0;
        while(a!=0 && b!=1){
            a=a/b;
            count++;
        }
        totalsteps=min(totalsteps,count+(b-copy));
        b++;
        a=copya;
    }
    
    cout<<totalsteps<<endl;
}
}