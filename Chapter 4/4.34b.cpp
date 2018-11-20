#include <iostream>
using namespace std;

int main()
{
   double e = 1.0;
   int number = 1;
   int a;
   int b = 1;


   cout << "Enter a number: ";
   cin >> a;


   while ( number < a )
   {

      b *= number;
      number=number + 1;
      e += 1.0 / b;

   }

   cout << "the answer is " << endl;
   cout <<e<<endl;
}
