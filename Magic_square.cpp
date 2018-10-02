#include <iostream>
//Magic Square
using namespace std;

int main()
{
    int r,c,i,j,n=1;
    cout<<"Enter Magic Square Dimension:";
    cin>>r;
    c=r;
    int **a=new int*[r];
    for(i=0 ; i<r ; i++)
        a[i]=new int[c];

    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ;j++)
        {
            a[i][j]=0;
        }
    }

    for(i=0,j=c/2 ; n<=r*r ; i=i-1,j++,n++)
    {
        if((i<0)&&(j>=c))
        {
            i+=2;
            j=j-1;
            a[i][j]=n;
        }
        else if((i<0)&&(j<c))
        {
            i=r-1;
            a[i][j]=n;
        }
        else if((i<r)&&(j>=c))
        {
            j=0;
            a[i][j]=n;
        }
        else if(a[i][j]==0)
        {
            a[i][j]=n;
        }
        else
        {
            i+=2;
            j-=1;
            a[i][j]=n;
        }
    }
    for(i=0 ; i<r; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}
