
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
   
   int n;
   cin>>n;
   vector<int>a;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       a.push_back(x);
   }

    int curr_length=0;
    int curr_negatives=0;

    vector<int> output;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        curr_negatives++;

        if(curr_negatives>=3)
        {
            curr_negatives=1;
            output.push_back(curr_length);
            curr_length=1;
        }
        else
        {
            curr_length++;
        }
   
        

    }
    
         output.push_back(curr_length);

        cout<<output.size()<<endl;
    for(int i=0;i<output.size();i++)
    cout<<output[i]<<" ";
    cout<<endl;
   
   
    return 0; 
} 
