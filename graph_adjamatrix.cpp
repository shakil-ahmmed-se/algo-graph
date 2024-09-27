#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjaMat[N][N];
int main(){
    int n,m; // n = number of node and m = number of edges
    cin>> n>> m;
        for (int i = 0; i < m; i++)
        {
            int u,v;
            cin>>u>>v;
            adjaMat[u][v] = 1; // for directed matrix
            adjaMat[v][u] = 1; // for undirected matrix
        }
        for (int i = n; i >=1 ; i--)
        {
            for (int j = 1; j <= n; j++)
            {
                cout<< adjaMat[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
        
    return 0;
}