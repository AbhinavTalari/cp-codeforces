
#include<bits/stdc++.h> 
using namespace std; 
  

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
  

void printGraph(vector<int> adj[], int V) 
{   cout<<"safsfasfasf";
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
   
    int V;
    cin>>V;
    vector<int> adj[V]; 
    for(int i=0;i<V-1;++i)
    {
        int x,y;
        cin>>x>>y;
        addEdge(adj,x-1,y-1);   
    }

    int ans=0;

        for(int i=0;i<V;i++)
        {
            if(adj[i].size()==1)
            ans++;
        }
        cout<<ans<<endl;
    return 0; 
} 
