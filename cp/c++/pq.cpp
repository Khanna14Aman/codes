#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int long long n;
	int k;
	cin>>n>>k;
	string s;
	cin>>s;
	int long long length,mid,sind,eind;
	priority_queue<pair<int,int>>q;
	q.push({n,-1});
	map<int,int>mpp;
	for(int i =1;i<=k;i++)
	{
		sind = -1*q.top().second;
		length = q.top().first;
		eind = sind + length -1;
		q.pop();
		mid = (sind+eind)/2;
		if(length % 2==0 && s[i-1]=='R')
		{
			mid = mid+1;
			mpp[mid]=i;
		}
		else{
			mpp[mid]=i;
		}
		//else if(length % 2 == 0 && s[i-1]=='L')
		//{
		//	mid = mid-1;
		//	mpp[mid]=i;
		//}
		if(mid!=sind)
		{
			q.push({mid-sind,-1*sind});
		}
		if(mid!=eind)
		{
			q.push({mid-eind,-1*(mid+1)});
		}
		int q;
		cin>>q;
		int long long no;
		while(q--)
		{
			cin>>no;
			if(!mpp[no])
			{
				cout<<-1<<"\n";
			}
			else{
				cout<<mpp[no]<<"\n";
			}
		}

	}
	return 0;
}