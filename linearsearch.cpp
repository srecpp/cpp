#include <iostream> 
using namespace std;
int search(int arr[],int n,int x)
{
 int i; 

 for(i=0;i<n;i++) 
 if(arr[i]==x)
 return i;
 return -1;
}
int main(void)
{
 int size;
 cout<<"Enter the size of the array: "; 
 cin>>size;
 int arr[size],x;
 cout<<"Enter array elements: \n";
 for(int i=0;i<size;i++)
 {
 cout<<"\t\t\t"; 
 cin>>arr[i];
 }
 while(1)
 { 
 cout<<"\nMenu:\n1.Search\n2.Exit\nEnter your option: " ;
 int a;
 cin>>a; 
 switch(a)
 {

 case 1:
 { 
 cout<<"\nEnter the search element: ";
 cin>>x;
 int result=search(arr,size,x);
 if(result==-1)
 cout<<"\nElement is not present in array\n"; 
 else
 cout<<"\nElement is present at index "<<result<<endl;
 }
 break;
 case 2:
 cout<<"Program ends!!"; 
 exit(2);
 break;
 default:
 cout<<"Enter a valid option\n";
 }
 }
 return 0;
}