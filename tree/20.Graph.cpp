#include <bits/stdc++.h>
using namespace std;

//when function  parameter has value, then it is optional parameter
// bool und = true

const int n = 6;

void addEdge(int mat[][n], int s, int d, int w, bool und = true)
{
    mat[s][d] = w;

    if(und)
    {
        mat[d][s] = w;
    }
}

//addEdge(mat,0,2,3,false)

int main()
{
    /*int n;
    cout<<"number of vertices: ";
    cin>>n;*/

    int mat[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            mat[i][j] = 0;
        }
    }

    int edges;
    cout<<"number of edges: ";
    cin>>edges;

    while(edges--)
    {
        int s,d,w;
    cout<<"s: ";
    cin>>s;
    cout<<"d: ";
    cin>>d;
    cout<<"w: ";
    cin>>w;

    addEdge(mat,s,d,w,false);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}