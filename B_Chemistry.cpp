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
        int oc=0;//counts odd number
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;  
        }
        for(int i:freq){
            if(i%2==1) oc++;
        }
        if(k>=oc-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}