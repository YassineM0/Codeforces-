// Codeforces Round 869 (Div. 2) - B
#include <bits/stdc++.h>
#define  ll long long
 
int main(){
    int n;cin>>n;
    while(n--){
        int a;cin>>a;
        if(a==1){
            cout<<"1\n";
            continue;
        }
        if((a*(a+1)/2)%a==0){
            cout<<"-1\n";
            continue;
        }
        for(int i=a;i>0;i--){
            if(i&1)cout<<i<<' '<<i+1<<' ';
        }
        cout<<'\n';
    }
}    
