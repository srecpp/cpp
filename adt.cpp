#include <iostream> 
using namespace std;
class complex
{
 int real;
 int imaginary; 
 public:
 void setdata ()
 {
 cin >> real >> imaginary;
  cout<<endl;
 }
 void getdata ()
 {
 cout << real << "+" << imaginary << "i\n" << endl;
 }
 void sum (complex x1, complex x2)
 {
 real = x1.real + x2.real;
 imaginary = x1.imaginary + x2.imaginary;
 }
 void sub (complex y1, complex y2)
 {
 real = y1.real - y2.real;
 imaginary = y1.imaginary - y2.imaginary;
 }
};
int main ()
{
 int a;
 complex c1, c2, c3, c4;
 while (1)
 { 
cout<<"================\nMenu:\n1.Initialization\n2.Display\n3.Add\n4.Subtract\n5.Exit"<< endl;
 cout<<"Enter your choice:";
 cin >> a;
 switch (a)
 {
 case 1:
 {
 cout << "\nEnter real and imaginary (1): " << endl; c1.setdata ();
 cout << "Enter real and imaginary (2): " << endl; c2.setdata ();
 break;
  }
 case 2:
 {
 cout << "\nFirst complex\n"; c1.getdata ();
 cout << "Second complex\n"; c2.getdata (); 
 break;
 }
 case 3:
 {
 cout << "\nSum of complex: \n"; c3.sum (c1, c2);
 c3.getdata ();
 break;
 }
 case 4:
 {
 cout << "\nDifference between two complex: \n"; c4.sub (c1, c2);
 c4.getdata ();
 break;
 }
 case 5:
 {
 cout << "\nProgram Ends!"; exit (1);
 }
 default:
 cout << "\nPlease enter a valid option.\n\n";
 }
 }
 return 0;
}