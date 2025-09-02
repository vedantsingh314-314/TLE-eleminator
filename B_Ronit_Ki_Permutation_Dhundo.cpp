#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    int t;
    cin>>t;
    while(t--){
        int m,s;
        cin>>m>>s;
        vector<int> num(m);
        for(int i=0;i<m;i++){
            cin>>num[i];
        }
        sort(num.begin(),num.end());
        int sum=0;
        for(int i=0;i<m;i++){
               sum=sum+num[i];
        }
        int expsum=(num[m-1]+1)*(num[m-1])/2;
        s=s-(expsum-sum);
        if(s<0){
            cout<<"NO"<<endl;
            continue;
        }
        int j=num[m-1]+1;
        while(s>0){
            s=s-j;
            j++;
        }
        if(s==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
