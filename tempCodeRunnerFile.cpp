#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int a,b,c,d;
    int evenc=0;
    int rem1=0,rem2=0;
    bool b1=false,b2=false,b3=false;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)evenc++;
        if(arr[i]%4==0)b3=true;
        if(arr[i]%3==0) b1=true;
        if(arr[i]%5==0) b2=true;
        rem1=max(rem1,arr[i]%3);
        rem2=max(rem2,arr[i]%5);
    }
    if(k==2){
        if(evenc>0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    if(k==3){
        if(b1) cout<<0<<endl;
        else cout<<3-rem1<<endl;
    }
    if(k==4){
        if(evenc>1 || b3==true)cout<<0<<endl;
        if(evenc==1)cout<<1<<endl;
        if(evenc==0)cout<<2<<endl;
    }
    if(k==5){
        if(b2)cout<<0<<endl;
        else cout<<5-rem2<<endl;
    }
}
}