#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++){
        int m ;
        cin>>m;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            arr[i].push_back(x);
        }
        sort(arr[i].begin(),arr[i].end());
    }
    //inputs taken 
    int min1=INT_MAX,min2=INT_MAX;
    long long sum=0;
    for(int i=0;i<n;i++){
        min1=min(arr[i][0],min1);
        min2=min(arr[i][1],min2);
        sum=sum+arr[i][1];
    }
    sum=sum+min1-min2;
    cout<<sum<<endl;
}
}