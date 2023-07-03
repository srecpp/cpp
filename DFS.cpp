#include <iostream>
#include <list>
using namespace std;
class Graph
{
 int V;

 list<int> *adjList;
 public:
 void vertices(int V)
 {
 this->V = V;
 adjList = new list<int>[V];
 }
 void addEdge(int v, int w)
 { 
 adjList[v].push_back(w);
 }
 void DFS_util(int v, bool visited[])
 {
 visited[v] = true;
 cout <<"\t\t"<< v <<endl;
 list<int>::iterator i;
 for(i = adjList[v].begin(); i != adjList[v].end(); ++i)
 if(!visited[*i])
 DFS_util(*i, visited);
 }
 void DFS()
 {
 bool *visited = new bool[V]; 
 for (int i = 0; i < V; i++) 
 visited[i] = false;
 for (int i = 0; i < V; i++) 
 if (visited[i] == false) 
 DFS_util(i, visited);
 }
};
int main()
{
 int a,vert,e1,e2,source,edge; 
 Graph v;

 while(1)
 {
 cout<<"\nMenu:\n1.Enter no.of vertices\n2.Add edge\n3.Display\n4.Exit \n\nEnter your choice :";
 cin>>a;
 switch(a)
 {
 case 1:
 cout<<"\nEnter no.of.Vertices: ";
 cin>>vert;
 v.vertices(vert);
 break;
 case 2:
 cout<<"\nEnter the no.of.edges: ";
 cin>>edge;
 cout<<endl;
 for(int i=1;i<=edge;++i)
 {
 cout<<"Enter the edge: "; 
 cin>>e1>>e2;
 v.addEdge(e1,e2);
 }
 break;
 case 3: 
 cout<<"\nElements:\n"; 
 v.DFS();
 break;
 case 4:
 cout<<"Program Ends!!\n"; 
 exit(6);
 break;
 default:
 cout<<"Enter a valid option\n";
 }

 }
 return 0;
}