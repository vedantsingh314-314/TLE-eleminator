#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    long long x;
    long long n;
    cin>>x>>n;
    long long div,rem;
    div=n/4;
    rem=n%4;
    for(long long i=(div*4)+1;i<=(div*4)+rem;i++){
        if(x%2==0) x=x-i;
        else x=x+i;
    }
    cout<<x<<endl;
}
}