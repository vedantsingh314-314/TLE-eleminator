#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;
        unordered_map<char, int> mpp;
        for (int i = 0; i < t.length(); i++)
            mpp[t[i]]++;
            for(int i=s.length()-1;i>=0;i--){
                if(mpp.find(s[i])!=mpp.end() && mpp[s[i]]>0){
                    mpp[s[i]]--;
                }
                else {
                    s[i]='.';
                }
            }
            string finalstr="";
            for(int i=0;i<s.length();i++){
                if(s[i]!='.')finalstr=finalstr+s[i];
                else continue;
            }
            if(finalstr==t)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
}