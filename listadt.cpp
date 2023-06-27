#include <iostream>
using namespace std;
int arr[5];
int i = 0;
void insertion ()
{
 int j, n;
 cout << "\nEnter the no of element to be inserted: ";
 cin >> n;
 for (j = 0; j < n; j++)
 {
 if (i < 5)
{
 int a;
 cout << "Enter the element: ";
 cin >> a;
 arr[i] = a;
 i++;
 }
 else
 cout << "\nArray is Full.\n";
 }
 cout<<endl;
}
void deletion ()
{
 if (i != 0)
 {
 i--;
 cout << "\n***** Element Deleted *****\n\n";
 }
 else
 cout << "\nArray is Empty!\n\n";
}
void search ()
{
int a, j, c = 0;
 cout << "\nEnter the element: ";
 cin >> a;
 if (i > 0)
 {
 for (j = 0; j <= i; j++)
 {
 if (arr[j] == a)
 {
 cout<<a<<" is found at "<<j+1<<" position.\n\n";
 c++;
 }
 }
 }
 else
 {
 cout <<"Array is Empty!\n" << endl;
 }
 if(c==0)
 cout<<a<<" is not present in the array!\n\n";
}
void postional_insertion ()
{
 int position, pos, element, j;
cout << "\nEnter the position: ";
 cin >> pos;
 position = pos - 1;
 cout << "Enter the element: ";
 cin >> element;
 if (position <= i)
 {
 for (j = i; j > position; j--)
 {
 arr[j] = arr[j - 1];
 }
 arr[j] = element;
 i++;
 cout<<"\n*****Element Inserted*****\n";
 }
 else
 {
 cout << "\nPosition out of range!\n\n" << endl;
 }
}
void postional_deletion ()
{
 int position, pos, j;
 cout << "\nEnter the position: ";
cin >> pos;
 position = pos - 1;
 if (position <= i)
 {
 for (j = position; j <= i; j++)
 {
 arr[j] = arr[j + 1];
 }
 i--;
 cout<<"\n*****Element Deleted*****\n";
 }
 else
 {
 cout << "\nPostion out of range!\n\n";
 }
}
void display ()
{
 int k;
 for (k = 0; k < i; ++k)
 {
 cout << arr[k] << endl;
 }
 cout<<endl;
}
int main ()
{
 int b;
 while (1)
 {
 
cout<<"=====================\nMenu:\n1)Insert\n2)Delete\n3)Search\n4)Positional Insertion\n5)Positional Deletion\n6)Display\n7)Exit\n\nEnter your Choice: ";
 cin >> b;
 switch (b)
 {
 case 1:
 insertion ();
 break;
 case 2:
 deletion ();
 break;
 case 3:
 search ();
 break;
 case 4:
 postional_insertion ();
 break;
 case 5:
 postional_deletion ();
 break;
 case 6:
 display ();
 break;
 case 7:
 {
 cout << "\nProgram Ends!\n";
 exit (2);
 }
 break;
 default:
 cout << "Enter a valid option.\n";
 }
 }
 return 0;
}

