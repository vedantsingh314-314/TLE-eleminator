#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        //inputs
        int k;
        long long count=b-1;
       // if(a>1){
        for(int i=0;i<n-1;i++){
            k=min(a,v[i]+1);
            count=count+k-1;
        }
        int last=min(a,v[n-1]+1);
        count=count+last;
        cout<<count<<endl;

   // }
    //else cout<<1<<endl;
    }
}