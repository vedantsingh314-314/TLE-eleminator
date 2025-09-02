#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        long long sum_i=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum_i+=a[i];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long r_sum=0;
            for(int i=l-1;i<=r-1;i++){
                r_sum+=a[i];
            }
            long long sumd=(r-l+1)*k-r_sum;
            long long sumf=sumd+sum_i;
            if(sumf%2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
           }
    }
}