#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
int partition(int arr[],int big,int small)
{
 int pivot=arr[small];
 int i=(big-1),j;
 for(j=big;j<small;++j)
 {
 if(arr[j]<=pivot)
 {
 ++i;
 swap(&arr[i],&arr[j]);

 }
 }
 swap(&arr[i+1],&arr[small]);
 return (i+1);
}
void quicksort(int arr[],int big,int small)
{
 if(big<small)
 {
 int pivot=partition(arr,big,small); 
 quicksort(arr,big,pivot-1);
 quicksort(arr,pivot+1,small);
 }
}
void display(int arr[],int size)
{
 cout<<"\nArray elements: \n"; 
 for(int i=0;i<size;++i)
 {
 cout<<"\t\t"<<arr[i]<<endl;
 }
}
int main()
{ 

 int size,i,opt,element;
 cout<<"Enter no.of elements: "; 
 cin>>size;
 int arr[size];
 for(i=0;i<size;++i)
 {
 cout<<"Enter element: ";
 cin>>element; 
 arr[i]=element;
 }
 while(2)
 {
 cout<<"\nMenu:\n1.Quick Sort\n2.Display\n3.Exit\n";
 cout<<"Enter an option: "; 
 cin>>opt;
 switch(opt)
 {
 case 1: 
 quicksort(arr,0,size-1);
 cout<<"\nQuick Sorted!!\n"; 
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
