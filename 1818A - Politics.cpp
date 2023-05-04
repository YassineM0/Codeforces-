//Codeforces Round 869 (Div. 2) - A
#include <bits/stdc++.h>
#define  ll long long
 
using namespace std;
 
int main(){
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        map<string,int>mp;
        vector<string>v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        cout<<mp[v[0]]<<'\n';
    }
}    
