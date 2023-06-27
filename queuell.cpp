#include <iostream> 
using namespace std; 
class node 
{ 
 public:
 int info; 
 class node* next;
};
class queue
{ 
 node *rear; 
 node *front;
 public:
 queue() 
 {
 rear=NULL;
 front=NULL;
 }
 node* create_node() 
 { 
 node *q; 
 int element; 
q=new node;
 cout<<"Enter an element: "; 
 cin>>element; 
 q->info=element; 
 q->next=NULL;
 } 
 void enqueue()
 { 
 node *temp=create_node(); 
 node *q;
 if(rear==NULL) 
 {
 rear=temp;
 front=temp;
 } 
 else 
 {
 if(rear->next==NULL) 
 {
 rear->next=temp;
 rear=temp;
 } 
 } 
 cout<<"Element inserted\n";
 } 
 void dequeue() 
 {
 if(front==NULL) 
 {
 cout<<"No elements to be deleted(Empty queue)\n";
 } 
 else 
 { 
 node *temp; 
46
 temp=front; 
 if(front->next==NULL)
 {
 cout<<front->info<<" (first element) deleted(Empty queue)\n";
 delete(front);
 front=NULL;
 rear=NULL;
 }
 else
 {
 cout<<front->info<<" element deleted\n";
 front=front->next;
 delete(temp); 
 }
 }
 } 
 void display() 
 { 
 if(front==NULL)
 {
 cout<<"No elements to be displayed(Empty queue)\n";
 }
 else
 {
 node *q,*p;
 q=front;
 p=rear;
 cout<<"Queue Elements: "<<endl;
 while(q!=p)
 {
 cout<<"\t\t"<<q->info<<endl;
 q=q->next;
 }
 cout<<"\t\t"<<q->info<<endl;
47
 }
 }
};
int main()
{
 int opt;
 queue a; 
 while(2)
 {
 cout<<"================\nMenu:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
 cout<<"Enter an option: ";
 cin>>opt;
 switch(opt)
 {
 case 1:
 a.enqueue();
 break;
 case 2:
 a.dequeue();
 break;
 case 3:
 a.display();
 break;
 case 4:
 cout<<"Program Ends!!\n";
 exit(6);
 break;
 default:
 cout<<"**Enter a valid option.**\n";
 break;
 }
 }
 return 0;
}
