#include <iostream>
using namespace std;

int main() {
    int no,j;
    cin>>no;
    for(j=1;j<=no;j++)
    {
    int n,k;
    cin>>n>>"\t">>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key,ch=-1;
    cin>>"\n">>key;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
           ch=i;
            break;
        }
        
        
    }
    cout<<"\n"<<ch;
    }
   
	//code
	return 0;
}