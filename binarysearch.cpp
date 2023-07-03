#include <iostream> 
using namespace std;
int binarySearch(int arr[], int x, int l, int h)
{
 if (h>= l)
 {
 int mid = l + (h - l) / 2;
 if (arr[mid] == x)


 return mid;
 if (arr[mid] > x)
 return binarySearch(arr, x, l, mid - 1);
 return binarySearch(arr, x, mid + 1, h);
 }
 return -1;
}
int main()
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
 int result=binarySearch(arr,x,0,size-1);
 if(result==-1)
 cout<<"\nElement is not present in array\n"; 
 else
 cout<<"\nElement is present at index "<<result<<endl;
 }
 break;
 case 2:
 {
 cout<<"Program ends!!"; 
 exit(2);
 }
 break;
 default:
 cout<<"Enter a valid option\n";
 }
 }
 return 0;
}