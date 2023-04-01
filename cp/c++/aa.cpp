#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    int  maxi[m];
    for(int j=0;j<m;j++){
        int maxe=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i][j]-'0'>maxe){
                maxe = a[i][j]-'0';
            }
        }
        maxi[j]=maxe;
    }
    
    int child[n];
    memset(child,0,sizeof(child));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]-'0'==maxi[j]){
                child[i]=1;
                //cout<<child[i]<<endl;
            }
        }
    }
    
    
    int count=0;
    for(int i=0;i<n;i++){
        count+=child[i];
    }
    
    cout<<count<<endl;
    
    // for(int i=0;i<m;i++){
    //     cout<<maxi[i]<<" ";
    // }
    return 0;
}