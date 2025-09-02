#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool check=false;
        if(n%2==0 && n>2){
            check=true;
        }
        if(check==false){
            cout<<-1<<endl;
            continue;
        }
        long long maxv,minv;
        if(n%4==0 && n%6==0){
            maxv=n/4;
            minv=n/6;
        }
        if(n%4==0 && n%6!=0){
            maxv=n/4;
            if(n%6==2)minv=2+(n-8)/6;
            else if(n%6==4)minv=1+(n-4)/6;
        }
        if(n%4!=0 && n%6==0){
            minv=n/6;
            maxv=1+(n-6)/4;
        }
        if(n%4!=0 && n%6!=0){
            if(n%6==2){
                minv=2+(n-8)/6;
                maxv=1+(n-6)/4;
            }
            if(n%6==4){
                minv=1+(n-4)/6;
                maxv=1+(n-6)/4;
            }
        }
        cout<<minv<<" "<<maxv<<endl;
    }
}