#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> box(n,vector<int> (n-1));
        unordered_map<int,int> count;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>box[i][j];
            }
            count[box[i][0]]++;
            }
            int peak=0;
            for(auto &it : count){
                if(it.second==n-1){
                    peak=it.first;
                    break;
                }
            }
            vector<int> ans;
            ans.push_back(peak);
            for(auto i:box){
                    if(i[0]!=peak){
                        ans.insert(ans.end(),i.begin(),i.end());
                        break;
                    }
            }  
            for(int i:ans){
                cout<<i<<" ";
            }      
            cout<<endl;

        
    }
}
