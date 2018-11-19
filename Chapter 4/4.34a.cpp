#include <iostream>
using namespace std;
int main()
{
   int a = 1;
   int b = 1;

   cout << "Enter a number: ";
   cin >>a;
cout<<a;

while (a>0)
   {
      b*=a;
      --a;
   }
   cout << "! is "<< b;
}
