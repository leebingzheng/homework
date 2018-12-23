#include <iostream>

using namespace std;

int main()
{
    int a;
   int value;
   int smallest;
   cout << "Enter the number ";

   cin >> a >> smallest;


   for ( int i = 2; i <= a; i++ )
   {
      cin >> value;


      if ( value < smallest )
         smallest = value;
   }


   cout << "\nThe smallest is: " << smallest << endl;

}
