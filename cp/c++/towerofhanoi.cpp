#include<bits/stdc++.h>// this header file takes more time to execute.
using namespace std;
void towerofhanoi(int n, char a, char b, char c)
{
	if(n==1)
	{
		cout<<"\n move disk 1 from rod  "<<a<<"  to rod  "<<b;
		return;
	}
	towerofhanoi(n-1,a,c,b);
	cout<<"\n"<<" move disk "<<n<<" from rod  "<<a<<"  to rod  "<<b;
	towerofhanoi(n-1,c,b,a);
}
int main()
{
	int n;
	char a,b,c;
	cout<<"\nenter no of disk";
	cin>>n;
	cout<<"\nenter source rod\n ";
	cin>>a;
	cout<<"\nenter destination rod\n";
	cin>>b;
	cout<<"\nenter helping rod\n";
	cin>>c;
	towerofhanoi(n,a,b,c);

	return 0;

}