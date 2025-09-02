#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            vector<int> nums(n);
            for(int i=0;i<n;i++) cin>>nums[i];
            //inputs;
            int count=0;
            bool flag=true;
            for(int i=n-2;i>=0;i--){
                while(nums[i]>=nums[i+1]){
                    nums[i]=nums[i]/2;
                    count++;
                    if(nums[i]==0){
                        if(i>0 || nums[i+1]==0) flag=false;
                        break;
                    }
                }
                if(!flag)break;
            }
            if(!flag)cout<<-1<<endl;
            else cout<<count<<endl;
       }
   }
    