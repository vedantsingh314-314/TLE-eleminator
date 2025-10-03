#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    long long n,p;
    cin>>n>>p;
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int len=n;
    map<long long,long long> mpp;
    for(int i=0;i<n;i++){
        mpp[b[i]]=a[i]+mpp[b[i]];
    }
    vector<long long> arr(n);
    arr=b;
    sort(arr.begin(),arr.end());
    long long cost=0;
    cost=cost+p;
    n=n-1;
    for(int i=0;i<len;i++){
        if(arr[i]>=p)break;
        if(n-mpp[arr[i]]>=0){
            cost=cost+arr[i]*mpp[arr[i]];
            n=n-mpp[arr[i]];
            mpp[arr[i]]=0;
        }
        else if(n-mpp[arr[i]]<0){
            cost=cost+arr[i]*n;
            n=0;
        }
    }
    if(n>0)cost=cost+p*n;
    cout<<cost<<endl;
}
}