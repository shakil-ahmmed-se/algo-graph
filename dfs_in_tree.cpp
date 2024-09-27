#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
void dfs(int u){
    //section 1:actions just after entering node  u
    visited[u] = true;
    cout<<"visting node :"<< u <<endl;
    for(int v : adj[u]){
        //section 2:actions before entering a new neighbor.
        if(visited[v] == true) continue;
        dfs(v);

        //section3:action after exiting a neightbor 
    }
    //section 4:action before exiting node u
}


int main(){
    int n,m;
    cin>>n>>m;
    
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    //visited ki na check korar jonno
    cout<<"Visited array :\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<"Node "<<i<<"Status "<<visited[i]<<endl;
    }
    

    return 0;
}