#include <iostream> 
using namespace std;
void insertion(int arr[],int size)
{
 int i,j,a;
 for(i=1;i<size;++i)

 {
 a=arr[i];
 j=i-1;
 while(j>=0 && arr[j]>a)
 {
 arr[j+1]=arr[j]; 
 j=j-1;
 }
 arr[j+1]=a;
 }
}
void display(int arr[],int size)
{
 cout<<"Array elements: \n";
 for(int i=0;i<size;++i)
 {
 cout<<"\t\t"<<arr[i]<<endl;
 }
}
int main()
{
 int size,element,i,opt;
 cout<<"Enter the no.of.elements: ";
 cin>>size;

 int arr[size]; 
 for(i=0;i<size;++i)
 {
 cout<<"Enter the element: "; 
 cin>>element; 
 arr[i]=element;
 }
 while(2)
 {
 cout<<"\nMenu:\n1.Insertion Sort\n2.Display\n3.Exit\n";
 cout<<"Enter an option: "; 
 cin>>opt;
 switch(opt)
 {
 case 1: 
 insertion(arr,size);
 cout<<"\nElements Sorted!!\n"; 
 break;
 case 2:
 display(arr,size);
 break;
 case 3:
 cout<<"\nProgram Ends!!\n"; 
 exit(6);

 break;
 default:
 cout<<"\n**Enter a valid option.**\n";
 break;
 }
 }
 return 0;
}
