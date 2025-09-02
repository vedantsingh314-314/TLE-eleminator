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
        int c=0;
        bool check=true;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                c++;
            }
            else c=0;
            if(c>=k){
                check =false;
                break;
            }
        }
        if(check==true)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
            continue;
        } 
        vector<int> arr(n,0);
        int num=1;
        int num2=n;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                arr[i]=num;
                num++;
            }
            if(s[i]=='0'){
                arr[i]=num2;
                num2--;
            }
        }
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
}