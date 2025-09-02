#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            long long min_sum=0,max_sum=0;
            long long n,k,x;
            cin>>n>>k>>x;
            min_sum=k*(k+1)/2;
            max_sum=k*(2*n-k+1)/2;
            if(x>=min_sum && x<=max_sum){
                cout<<"YES"<<endl;
            }
            else cout<< "NO"<<endl;
    }
}