#include <iostream>
using namespace std;
class node
{
public:
int info;
class node *next;
};
class sll
{
node *top;
public:
sll()
 { 
 top=NULL;
 } 
 node *create() 
 {
 node *n; 
 int element; 
 n=new node;
 cout<<"Enter an element: ";
 cin>>element; 
 n->info=element; 
 n->next=NULL;
 return n;
} 
 void push()
 {
 node *temp=create(); 
 if(top==NULL) 
 {
 top=temp;
 }
 else 
 {
 temp->next=top; 
 top=temp;
 }
 cout<<"--Element is pushed in--\n\n";
 }
 void pop() 
 {
 if(top==NULL) 
 {
 cout<<"--Stack is Empty!!--\n\n";
 }
 else 
 {
 node *temp; 
 temp=top; 
 top=top->next; 
 delete(temp); 
 cout<<"--Element is popped out--\n\n";
 }
 } 
 void peek() 
 { 
 if(top==NULL)
 {
cout<<"--Stack is empty!!--\n\n";
 }
 else
 {
 cout<<"The top element is "<<top->info<<endl<<endl;
 }
 } 
 void display() 
 { 
 if(top==NULL)
 {
 cout<<"No elements to be displayed(Empty linked list)\n\n";
 }
 else
 {
 node *q; 
 q=top; 
 cout<<"Stack Elements:\n";
 while(q!=NULL) 
 {
 cout<<"\t\t"<<q->info<<endl;
 q=q->next;
 }
 }
 }
};
int main()
{ 
 sll o;
 for(;;)
 { 
 cout<<"Menu:\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n\nEnter your choice: "; 
 int choice;
 cin>>choice;
 switch (choice)
 {
 case 1:
 o.push();
 break;
 case 2:
 o.pop();
 break;
 case 3:
 o.peek();
 break;
 case 4: 
 o.display(); 
 break; 
 case 5:
 cout<<"Program Ends\n";
 exit(2); 
 break; 
 default:
 cout<<"\n**Enter a valid choice**\n\n";
 break;
 }
 }
 return 0;
}