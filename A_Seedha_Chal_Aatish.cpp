#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> line(n);
        for(int i =0;i<n;i++) cin>>line[i];
        int count=0;
        if(s>line[0] && s<line[n-1]){
        int close=min(line[n-1]-s,s-line[0]);
        int far=max(line[n-1]-s,s-line[0]);
        count=2*close+far;
        }
        else if(s>=line[n-1]){
            count=s-line[0];
        }
        else if(s<=line[0]) count=line[n-1]-s;

        
        cout<<count<<endl;
    }
}