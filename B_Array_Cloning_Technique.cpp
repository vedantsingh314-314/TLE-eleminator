#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++)cin>>arr[i];
   unordered_map<int,int> mpp;
   int maxoccur=0;
   for(int i=0;i<n;i++){
    mpp[arr[i]]++;
    maxoccur=max(maxoccur,mpp[arr[i]]);
   }
   int copies=0;
   int steps=0;
   int leftovers=n-maxoccur;
   while(leftovers>0){
        steps=steps+min(maxoccur,leftovers);
        leftovers=leftovers-maxoccur;
        copies++;
        maxoccur=2*maxoccur;
   }
   int ans=copies+steps;
   cout<<ans<<endl;
}
}