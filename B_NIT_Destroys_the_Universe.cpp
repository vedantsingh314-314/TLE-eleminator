#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        int count=0;
        int c=0;
        long long sum=0;
        bool flag1=false;
        bool flag2=false;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            sum+=nums[i];
            if(nums[i]==0)c++;
        }
        //inputs;
        if(sum==0){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]!=0&&nums[i+1]==0)flag1=true;
           else if(nums[i]==0&&nums[i+1]!=0&&flag1==true)flag2=true;
        }
        if(flag1&&flag2)cout<<2<<endl;
        else cout<<1<<endl;
        }
    }
