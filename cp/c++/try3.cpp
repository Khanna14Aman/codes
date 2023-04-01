#include <iostream>
#include<algorithm>

using namespace std;
 
int main() {
	int t; 
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		sort(a,a+n);
		int long long mid;
		int low =1;
		int high = a[n-1]-a[0];
		int lastcows,count;
		while(low<=high)
		{
			count=1;
			mid=(low+high)/2;
			lastcows = a[0];
			for(i=0;i<n;i++)
			{
				if((a[i]-lastcows)>=mid)
				{
					count++;
					lastcows = a[i];
				}
				if(count >= c)
				{
					break;
				}
			}
			if(count >= c)
			{
				low = mid+1;
			}
			else
			{
				high = mid-1;
			}
			
		}
		cout<<high<<"\n";
	}
	// your code goes here
	return 0;
} 