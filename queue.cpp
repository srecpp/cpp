#include <iostream>
using namespace std;
class queue
{
 int arr[3];
 int front,rear;
 public:
 queue()
 {
 front=rear=0;
 }
 void enqueue()
 { 
 int element,i;
 if(rear>=3)
 { 
 cout<<"Queue is full!\n";
 }
 else
 {
 cout<<"Enter the element: ";
 cin>>element;
 arr[rear]=element;
 rear++;
 cout<<"Element is added!\n";
 }
 }
 void dequeue()
 {
 if(front==rear)
 {
 cout<<"Queue underflow!\n";
 }
 else
 {
 cout<<arr[front]<<" is dequeued\n";
 front++;
}
 }
 void display()
 { 
 if(rear==front)
 {
 cout<<"Empty queue\n";
 }
 else
 {
 int i;
 cout<<"Queue Elements: \n";
 for(i=front;i<rear;i++)
 {
 cout<<"\t"<<arr[i]<<endl;
 }
 }
 }
};
int main()
{ 
 int a; 
 queue s1;
 while(1)
 {
cout<<"=================\nMenu:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice :";
 cin>>a;
 switch(a)
 {
 case 1:
 s1.enqueue();
 break;
 case 2:
 s1.dequeue();
 break;
 case 3:
 s1.display();
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
