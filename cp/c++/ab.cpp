#include <iostream>
using namespace std;

int main() {
    int t,x,xr,yr,y,d,t1,t2,m;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>xr>>yr>>d;
        t1 = x/xr;
        t2 = y/yr;
        m = min(t1,t2);
        if(m>=d)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
        
    }
	// your code goes here
	return 0;
}
