#include <iostream>  
using namespace std;
void oe()
{
 int a;
 cout<<"Enter an number: "; cin>>a;
 if(a%2==0)
 cout<<"\n"<<a<<" is an Even number.\n"<<endl; 
 else
 cout<<"\n"<<a<<" is an odd number.\n"<<endl;
}
void fact()
{
 int a;
 cout<<"Enter an number:";
 cin>>a; int i,f=1;
 for(i=1;i<=a;++i)
 {
 f=f*i;
 }
 cout<<"\nThe factorial of num "<<a<<" is "<<f<<endl<<endl;
}
int main()
{
 for(;;)
 {
 cout<<"======================\nMenu:\n1.To find odd or even\n2.To find factorial\n3.Exit\n\nEnter your choice: ";
 int choice;
 cin>>choice;
 switch (choice)
 {
 case 1:
 oe();
 break;
 case 2:
 fact();
 break;
 case 3:
 cout<<"Program Ends!!\n"; 
 exit(2);
 break;
  default:
 cout<<"\n**Enter a valid choice**\n\n"; 
 break;
 }
 }
 return 0;
}