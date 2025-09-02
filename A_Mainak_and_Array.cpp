#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int max1=(nums[0]-nums[1]);//when 0 is fixed
        int max2=(nums[n-2]-nums[n-1]);//when n-1 is fixed;
        int max3=(nums[n-1]-nums[0]);
        for(int i=1;i<n;i++){
            max1=max(max1,nums[i]-nums[0]);
        }
        for(int i=0;i<n-1;i++){
            max2=max(max2,nums[n-1]-nums[i]);
            max3=max(max3,nums[i]-nums[i+1]);
        }
        cout<<max(max1,max(max2,max3))<<endl;
        }
    }
