#include<bits/stdc++.h>
using namespace std;
int main(){
 
int t;
cin>>t;
while(t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    bool check =false;
    if((a+c)%2==0 && ((a+c)/2)%b==0) check=true;
    else if((b+(b-a))>0&&(b+(b-a))%c==0)check =true;
    else if((2*b-c)>0&&(2*b-c)%a==0)check =true;
    if((a+c)%2==1 && b!=c)check=false;
    if(check)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
