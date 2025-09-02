#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count;
        if(n<=6) {
            cout<<15<<endl;
            continue;
        }
        if(n%2==1){
            count=(n+1)*5/2;
        }
        else count=n*5/2;
        
        cout<<count<<endl;


    }
}
