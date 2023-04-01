#include<iostream>
#include<climits>
using namespace std;
int extract(int n, bool visited[], int d[])
{
	int small_ind,small=INT_MAX,i;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==false && d[i]<=small)
		{
			small=d[i];
			small_ind=i;
		}
	}
	
	return small_ind;
}
int main()
{
	int n,i,distance,j,source,u;
	cout<<"\nenter no of nodes";
	cin>>n;
	int w[n][n],d[n],pred[n];
	bool visited[n];
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cout<<"\nenter distance between "<<i<<"  to  "<<j;
			cin>>w[i][j];
			if(w[i][j]==0)
				w[i][j]=INT_MAX;
			
		}
	for(i=1;i<=n;i++)
	{
		d[i]=INT_MAX;
		pred[i]=-1;
		visited[i]=false;
	}
	cout<<"\nenter source node";
	cin>>source;
	d[source]=0;
	for(int c=1;c<=n;c++)
	{
		
		u = extract(n,visited,d);
		visited[u]=true;
		for(j=1;j<=n;j++)
		{
			
			if(visited[j]==false && d[u] != INT_MAX && w[u][j] != INT_MAX && w[u][j] < d[j])
			{
				d[j]=w[u][j];
				pred[j]=u;
			}
		}
	}
	
	cout<<"sortest distance between source to all node is\n";
	for(i=1;i<=n;i++)
		cout<<"  "<<d[i];
	cout<<"\npredecesor of every node is\n";
	for(i=1;i<=n;i++)
		cout<<"  "<<pred[i];

	return 0;
}