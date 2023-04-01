#include<stdio.h>
void main()
{
	int i,j,k;
	printf("a\tb\tc\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d\t%d\t%d\n",i,j,k);
			}
		}
	}
}













#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int dp[51][17][17][17][2];
int t,n;
string a,b,s;
int fun(int ind,int flag,int three,int six,int nine){
    if(three>16 || six>16 || nine>16)return 0;
    if(ind==-1){
        return (three!=0 && three==six && six==nine);
    }
    if(dp[ind][three][six][nine][flag]!=-1)return dp[ind][three][six][nine][flag];
    
    int limit=s[ind]-'0';
    if(flag){
        limit=9;
    }
    int ways=0;
    for(int digit=0;digit<=limit;digit++){
        bool islimit = digit<(s[ind]-'0')?true:flag;
        ways = (ways+fun(ind-1,islimit,three+(digit==3),six+(digit==6),nine+(digit==9)))%mod;
    }
    return dp[ind][three][six][nine][flag]=ways%mod;
}
int ans(string x){
    s=x;
    reverse(s.begin(),s.end());
    n=x.length();
    memset(dp,-1,sizeof(dp));
    return fun(n-1,0,0,0,0);
}
int f(string x){
    n = x.length();
    int cnt3=0,cnt6=0,cnt9=0;
    for(int i=0;i<n;i++){
        if(s[i]=='3')cnt3++;
        if(s[i]=='6')cnt6++;
        if(s[i]=='9')cnt9++;
    }
    if(cnt3>0 && cnt3==cnt6 && cnt6==cnt9)return 1;
    else return 0;
}
int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<(ans(b)-ans(a)+f(a)+mod)%mod<<endl;
    }
}