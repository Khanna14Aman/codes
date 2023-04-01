#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,count=0,x1,y1,x2,y2;
        cin>>n;
        char c[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>c[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(count==0)
                {
                    if(c[i][j]==*)
                    {
                        count++;
                        x1=i;
                        y1=j;
                    }
                }
                if(count==1)
                {
                    if(c[i][j]=='*')
                    {
                        count++;
                        x2=i;
                        y2=j;
                        break;
                    }
                }
            }
        }
        if(x1==x2)
        {
            if(x1==(n-1))
            {
                c[x1-1][y1]='*';
                c[x2-1][y2]='*';
            }
            else
            {
                c[x1+1][y1]='*';
                c[x2+1][y2]='*';
            }
            
        }
        else if(y1==y2)
        {
            if(y1==(n-1))
            {
                c[x1][y1-1]='*';
                c[x2][y2-1]='*';
            }
            else
            {
                c[x1][y1+1]='*';
                c[x2][y2+1]='*';
            }
        }
        else
        {
            c[x1][y2]='*';
            c[x2][y1]='*';
        }
        
        
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j];
        }
        cout<<"\n";
    }
}
    return 0;
}