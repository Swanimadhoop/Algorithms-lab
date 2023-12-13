#include<iostream>
using namespace std;

int long_com_seq(string x,string y)
{
    int i,j;
    int m=x.length;
    int n=y.length;
    int b[0,j];
    int c[i,0];

    for(i=0;i<m;i++)
    {
        c[i,0]=0;
    }
    for(j=1;j<n;j++)
    {
        b[0,j]=0;
    }
    for(i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(x[i]=y[j]){
                c[i,j]=c[i-1,j-1]+1;
                b[i,j];
                cout<<"↖"; 
            }
        }
    }
}
