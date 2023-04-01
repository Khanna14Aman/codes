#include<iostream>
#include<cstring>
using namespace std;
void prime(int n)
{
	bool a[n];
	memset(a,1,sizeof(a));
	for(int i=2;i<=n;i++)
	{
		if(a[i]==1)
		{
			for(int j = i*i ;j<=n ;j += i)
			{
				a[j]=0;	
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]==1)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int n;
	cin>>n;
	prime(n);
	return 0;
}






































#include <iostream>
using namespace std;

int main() {
    int n,m,i,j,u,q;
    cin>>n>>m>>u>>q;
    int long long a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int long long scanline[n+1][m+1];
    while(u--)
    {
        int k,r1,c1,r2,c2;
        cin>>k>>r1>>c1>>r2>>c2;
        scanline[r1][c1] += k;
        scanline[r2+1][c2+1] -= k;
    }
    int long scan=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scan += scanline[i][j];
            a[i][j] += scan;
        }
    }
    int long long prefix[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            prefix[i][j] += a[i][j];
            if(i>0)
            prefix[i][j] += prefix[i-1][j];
            if(j>0)
            prefix[i][j] += prefix[i][j-1];
            if(i>0 && j>0)
            prefix[i][j] += prefix[i-1][j-1];
        }
    }
    while(q--)
    {
        int x1,y1,x2,y2;
        int long long sum;
        cin>>x1>>y1>>x2>>y2;
        sum = prefix[x2][y2];
        if(x1>0)
        sum -= prefix[x1-1][y2];
        if(y1>0)
        sum -= prefix[x2][y1-1];
        if(x1>0 && y1>0)
        sum -= prefix[x1-1][y1-1];
        cout<<sum<<"\n";
        
        
    }
    
	// your code goes here
	return 0;
}
