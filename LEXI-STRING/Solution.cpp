// TCS CODEVITA PRACTICE QUESTION - E ( LEXI'S STRING )
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s,string;
        cin>>s>>string;
        map<char,int> pos;
        for(int i=0;i<26;i++){
            pos.insert({char(s[i]),i});
        }
        vector<pair<int,char>> p[string.size()];
        for(int i=0;i<string.size();i++){
            p[i].first = pos[string[i]];
            p[i].second = string[i];
        }
        sort(p.begin(),p.end());
        for(int i=0;i<string.size();i++){
            cout<<p[i].second;
        }
        cout<<"\n";
    }
  return 0;
}