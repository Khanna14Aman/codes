#include<iostream>
using namespace std;
int main()
{
	int k, n,i,j,inf=999;
	cout<<"\nenter number of nodes";
	cin>>n;
	int w[n][n], q[n][n];
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cout<<"\nenter distance between"<<i<<"  to  "<<j;
			cin>>w[i][j];
		}
	
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(w[i][j]==0)
				q[i][j]=inf;
			else
				q[i][j]=w[i][j];
		}	

    for(k=1;k<=n;k++)
    	for(i=1;i<=n;i++)
    		for(j=1;j<=n;j++)
    		{
    			if(q[i][j]>(q[i][k]+q[k][j]))
    				q[i][j]=q[i][k]+q[k][j];
    		}

    cout<<"\nafter flyodwarshall shortest path will be\n";
    
    	for(i=1;i<=n;i++)
    	{
    		for(j=1;j<=n;j++)
    		{
    			cout<<"  "<<q[i][j];
    		}
    		cout<<"\n";
    	}




	return 0;
}