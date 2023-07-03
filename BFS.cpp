#include<iostream> 
#include <list>
using namespace std;
class Graph
{
 int V;

 list<int> *adj;
 public:
 void vertices(int V)
 {
 adj = new list<int>[V];
 }
 void addedge(int e1, int e2)
 {
 adj[e1].push_back(e2);
 }
 void bfs(int s)
 {
 bool *visited = new bool[V];
 for(int i = 0; i < V; i++)
 {
 visited[i] = false;
 }
 list<int> queue;
 visited[s] = true; 
 queue.push_back(s);
 list<int>::iterator i;
 while(!queue.empty())
 {
 s= queue.front();
 cout <<"\t\t"<< s << "\n"; 
 queue.pop_front();
 for (i = adj[s].begin(); i != adj[s].end(); ++i)
 {
 if (!visited[*i])
 {
 visited[*i] = true;
 queue.push_back(*i);
 }
 }

 }
 }
};
int main()
{
 int a,vert,e1,e2,source,edge;
 Graph v; 
 while(1)
 {
 cout<<"\nMenu:\n1.Enter no.of vertices\n2.Add edge\n3.Display\n4.Exit\nEnter your choice :";
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
 v.addedge(e1,e2);
 }
 break;
 case 3:
 cout<<"\nEnter your source value: "; 
 cin>>source;
 cout<<"\nElements (Source-"<<source<<"):\n";
 v.bfs(source);

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
