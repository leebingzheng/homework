
#include <iostream>
using namespace std;

int main()
{
   for ( int row = 1; row <= 5; row++ )
   {
      for ( int space = 1; space <= 5 - row; space++ )
         cout << ' ';

      for ( int i = 1; i <= 2 * row - 1; i++ )
         cout << '*';

      cout << '\n';
   }
   for ( int row = 4; row >= 1; row-- )
   {
      for ( int space = 1; space <= 5 - row; space++ )
         cout << ' ';
      for ( int i = 1; i <= 2 * row - 1; i++ )
         cout << '*';

      cout << '\n';
   }

   cout << endl;
}
