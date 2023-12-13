//minimum cost path in a matrix
/*

#include<iostream>
using namespace std;


int find_min(int a, int b, int c) 
{
    return min(min(a, b), c);
}

void min_cost_path(int F[R][C], int n, int m)
{
    int C[R][C];

    C[0][0] = F[0][0];

    for (int i = 1; i < n; i++) {
        C[i][0] = C[i - 1][0] + F[i][0];
    }

    for (int j = 1; j < m; j++) {
        C[0][j] = C[0][j - 1] + F[0][j];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            C[i][j] = find_min(C[i - 1][j - 1], C[i - 1][j], C[i][j - 1]) + F[i][j];
        }
    }

    cout<<"Minimum cost path of the matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j];
        }
    }
}

int main()
{
    int m,n,size;
    
    cout<<"no of rows";
    cin>>m;
    cout<<"no of columns ";
    cin>>n;


    cout<<"Enter the elments of the matrix: ";
    for(int i=0;i<size;i++)
    {
            cin>>C[i];
    }

    min_cost_path(result,ar,n,m);


    return 0;
}
*/
