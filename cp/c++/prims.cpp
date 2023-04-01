#include<iostream>
#include<climits>
using namespace std;
int extract(int n, int key[], bool visit[])
{
	int small,min=INT_MAX,i;
	for(i=1;i<=n;i++)
		if(visit[i]==false && min >= key[i])
		{
			min=key[i];
			small=i;
		}

	return small;		
}
int main()
{ 
	int n,i,j,u;
	cout<<"\nenter no of nodes";
	cin>>n;
	int w[n][n],key[n],pra[n];
	bool visit[n];
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cout<<"\nenter work between"<<i<<"  to  "<<j;
			cin>>w[i][j];
			if(w[i][j]==0)
				w[i][j]=INT_MAX;
		}

	for(i=1;i<=n;i++)
	{
		key[i]=INT_MAX;
		visit[i]=false;
		pra[i]=-1;
	}	
	int source ;
    cout<<"\nenter source of nodes";
    cin>>source;
    key[source]=0;
	for(int c=1;c<=n;c++)
	{
		u = extract(n,key,visit);
		visit[u] = true;
		for(int v=1;v<=n;v++)
		{
			if(w[u][v] != INT_MAX && visit[v]==false && key[u]!= INT_MAX && w[u][v] < key[v])
			{
				cout<<"\na\n";
				key[v]=w[u][v];
				pra[v] =u;
			}
		}
	}
	cout<<"\nminimum cost of every node is\n";
	for(i=1;i<=n;i++)
		cout<<"  "<<key[i];
	cout<<"\n";
	for(i=1;i<=n;i++)
		cout<<"  "<<pra[i];


	return 0;
}