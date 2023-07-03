#include <iostream> 
using namespace std; 
class node 
{ 
 public:
 int info; 
 class node* next;
};
class ssl 
{ 
 node *p;
 public:
 ssl() 
 {
 p=NULL;
 }
 node* create_node() 
 {node *q; 
 int element; 
 q=new node;
 cout<<"Enter an element: "; 
 cin>>element; 
 q->info=element; 
 q->next=NULL;
 } 
 void finsert() 
 {
 node *temp=create_node(); 
 if(p==NULL) 
 {
 p=temp;
 } 
 else 
 { 
 temp->next=p; 
 p=temp;
 } 
 cout<<"Inserted at first\n";
 } 
 void linsert()
 { 
 node *temp=create_node(); 
 node *q;
 if(p==NULL) 
 {
 p=temp;
 } 
 else 
 {
 q=p;
 while(q!=NULL)
 {
 if(q->next==NULL) 
 {
 q->next=temp; 
 break;
 } 
 q=q->next;
 }
 } 
 cout<<"Inserted at last\n";
 } 
 void minsert() 
 {
 node *temp,*q; 
 int position,count=1; 
 cout<<"Enter the position: "; 
 cin>>position;
 temp=create_node();
 for(q=p;count<position-1;++count) 
 {
 q=q->next;
 }
 temp->next=q->next; 
 q->next=temp; 
 cout<<"Inserted at middle\n";
 } 
 void fdelete() 
 {
 if(p==NULL) 
 {
 cout<<"No elements to be deleted(Empty linked list)\n";
 } 
 else 
 { 
node *temp; 
 temp=p; 
 if(p->next==NULL)
 {
 delete(p);
 p=NULL;
 cout<<"First element deleted(Empty linked list)\n";
 }
 else
 {
 p=p->next;
 delete(temp); 
 cout<<"First element deleted\n";
 }
 }
 } 
 void ldelete() 
 { 
 if(p==NULL)
 {
 cout<<"No elements to be deleted(Empty linked list)\n";
 }
 else
 {
 node *temp,*q,*k; 
 q=p;
 if(p->next==NULL)
 { 
 delete(p);
 p=NULL;
 cout<<"Last element deleted(Empty linked list)\n";
 }
 else
 {
while(q->next->next!=NULL)
 { 
 q=q->next;
 } 
 temp=q->next;
 q->next=NULL;
 delete(temp);
 cout<<"Last element deleted\n";
 }
 }
 } 
 void mdelete()
 { 
 if(p==NULL)
 {
 cout<<"No elements to be deleted(Empty linked list)\n";
 }
 else
 {
 int position,count=1;
 node *temp,*q;
 cout<<"Enter the position: ";
 cin>>position;
 for(q=p;count<position-1;++count)
 {
 q=q->next;
 }
 temp=q->next;
 q->next=temp->next;
 temp->next=NULL;
 delete(temp);
 cout<<"Middle element deleted\n";
 }
 } 
void display() 
 { 
 if(p==NULL)
 {
 cout<<"No elements to be displayed(Empty linked list)\n";
 }
 else
 {
 node *q;
 q=p;
 cout<<"Stack Elements: "<<endl;
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
 int opt;
 ssl a; 
 while(1)
 {
 cout<<"\nMenu:\n1.Insert at first\n2.Insert at middle\n3.Insert at last\n4.Delete at first\n5.Delete at middle\n6.Delete at last\n7.Display\n8.Exit\n";
 cout<<"Enter an option: ";
 cin>>opt;
 switch(opt)
 {
 case 1:
 a.finsert();
 break;
 case 2:
 a.minsert();
 break;
 case 3:
 a.linsert();
 break;
 case 4:
 a.fdelete();
 break;
 case 5:
 a.mdelete();
 break;
 case 6:
 a.ldelete();
 break;
 case 7:
 a.display();
 break;
 case 8:
 cout<<"Program Ends!!\n";
 exit(6);
 break;
 default:
 cout<<"**Enter a valid option**\n";
 break;
 }
 }
 return 0;
}

