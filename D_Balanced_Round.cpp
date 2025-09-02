#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int maxi=1;
        int ans=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]+k>=arr[i+1]){
                maxi++;
            }
            else {
                maxi=1;
            }
            ans=max(ans,maxi);
        }
        cout<<arr.size()-ans<<endl;
    }
}
