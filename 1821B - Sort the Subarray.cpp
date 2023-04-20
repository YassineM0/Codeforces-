//Educational Codeforces Round 147 (Rated for Div. 2) B.
#include <bits/stdc++.h>
 
#define  ll long long
 
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a;
        vector<int>v(a),w(a);
        for(int i=0;i<a;i++)
            cin>>v[i];
        for(int i=0;i<a;i++)
            cin>>w[i];
        int l;
        for(int i=0;i<a;i++){
            if(v[i]!=w[i]){
                l=i;break;
            }
        }
        int r=l;
        while(w[r]<=w[r+1]&&r+1<a){
            r++;
        }
        if(l!=0){
            while(w[l]>=w[l-1]&&l){
                l--;
            }
        }
        l++;r++;
        cout<<l<<' '<<r<<'\n';
        
    }
}    
