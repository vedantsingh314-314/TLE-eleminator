#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        //inputs
        int count=0;
        bool flag=true;
        bool flag2=true;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                count++;
                flag2=false;
            }
            if(count==1 && s[i]=='0')count=0;
            if(count>1)flag=false;
        }
        vector<int> nums(n);
        for(int i=0;i<n;i++)nums[i]=i+1;
        if(flag2==true){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)cout<<nums[i]<<" ";
            cout<<endl;
            continue;
        }
        if(k==1)flag=false;
        if(k==2&&s[n-1]=='1'&&s[n-2]=='1')flag=false;
        if(flag==false){
            cout<<"NO"<<endl;
            continue;
        }
        int lasti=0;
        for(int i=1;i<n;i++){
            if(s[i]=='0') lasti=i;
            if(s[i]=='1'){
                swap(nums[i],nums[lasti]);
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)cout<<nums[i]<<" ";
        cout<<endl;
    }
}