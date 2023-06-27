#include <iostream>
using namespace std;
class stack
{
 int arr[10];
 int top;
 public:
 stack()
 {
 top=-1;
 }
 void push()
 { 
 int element,i;
 cout<<"Enter an element: ";
 cin>>element;
 if(top<10)
 { 
 top++;
 arr[top]=element;
 cout<<"Element is pushed!\n";
 }
 else
 {
 cout<<"Stack is full!\n";
 }
 }
 void pop()
 {
 if(top>-1)
 {
 top--;
 cout<<"Element is popped out!!\n";
}
 else
 {
 cout<<"Stack underflow!\n";
 }
 }
 void peek()
 {
 if(top<0)
 {
 cout<<"Stack Underflow.\n";
 }
 else
 {
 cout<<"Top most element: "<<arr[top]<<endl;
 } 
 }
 void display()
 {
 int i;
 for(i=top;i>=0;i--)
 {
 cout<<arr[i]<<endl;
 }
 } 
};
int main()
{ 
 int a; 
 stack s1;
 while(1)
 {
 cout<<"=================\nMenu:\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit \n\nEnter your choice :";
 cin>>a;
 switch(a)
 {
 case 1:
 s1.push();
 break;
 case 2:
 s1.pop();
 break;
 case 3:
 s1.peek();
 break;
 case 4:
 s1.display();
 break;
 case 5:
 cout<<"Program Ends!!\n";
 exit(6);
 break;
 default:
 cout<<"Enter a valid option\n";
 }
 }
return 0;
}

