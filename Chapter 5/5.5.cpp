#include <iostream>
using namespace std;

int main()
{
   int total = 0;
   int number;
   int value;

   cout << "Enter a number ";
   cin >> number;

   for ( int i = 1; i <= number; i++ )
   {
      cin >> value;
      total=total+value;
   }

   cout << "Sum of the " << number << " values is " << total << endl;
}
