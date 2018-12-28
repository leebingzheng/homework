#include <iostream>
using namespace std;

int main()
{
   int row;
   int column;
   int a;

   for ( row = 1; row <= 10; row++ )
   {
      for ( column = 1; column <= row; column++ )
         cout << "*";

      cout << endl;
   }




   for ( row = 10; row >= 1; row-- )
   {
      for ( column = 1; column <= row; column++ )
         cout << "*";

      cout << endl;
   }



   for ( row = 10; row >= 1; row-- )
   {
      for ( a = 10; a > row; a-- )
         cout << " ";

      for ( column = 1; column <= row; column++ )
         cout << "*";


   }



   for ( row = 10; row >= 1; row-- )
   {
      for ( a = 1; a < row; a++ )
         cout << " ";

      for ( column = 10; column >= row; column-- )
         cout << "*";


   }
}
