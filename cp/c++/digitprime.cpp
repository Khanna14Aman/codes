#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n=100000,i,j;
	int a[n]={0};
	for(i=2;i*i<=n;i++)
	{
		if(a[i]==0)
		{
			for(j=i*i;j<=n;j+=i)
			{
				a[j]=1;
			}
		}
	}
	vector<int>v;
	for(i=2;i<=n;i++)
		if(a[i]==0)
			v.push_back(i);
	int c = v.size();
	int b[n]={0};
	for (i=0;i<c;i++) { 
		
	
		int no=v[i];
		int sum=0;
		while(no!=0)
		{
			sum += (no%10);
			no /= 10;
		}
		
		
		if(a[sum]==0)
			{
				b[v[i]]=1;
			}
			else
			{
				b[v[i]]=0;
			}


		}
		
		int pre[n];
		for(i=0;i<n;i++)
		{
			if(i==0)
				pre[i]=b[i];
			else
				pre[i] = pre[i-1]+b[i];
		}

		int m;

		scanf("%d",&m);
		while(m--)
		{
			int x,y;

			scanf("%d%d",&x,&y);
			int sum;
			sum = pre[y]-pre[x-1];
			printf("%d\n",sum);
		}

	return 0;
}





