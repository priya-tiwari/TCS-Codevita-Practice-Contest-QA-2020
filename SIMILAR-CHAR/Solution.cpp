// TCS CODEVITA PRACTICE QUESTION - F ( SIMILAR CHAR )
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,p,q;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v(n,0),c(26,0);
    for(int i=0;i<n;i++){
        v[i] = c[int(s[i])-97];
        c[int(s[i])-97]++;
    }
    cin>>q;
    for(int i=0;i<q;i++){
            cin>>p;
            cout<<v[p-1]<<"\n";
    }
    return 0;
}
