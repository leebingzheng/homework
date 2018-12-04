
#include <iostream>
using namespace std;

bool multiple( int, int ); 

int main()
{
   int x; 
   int y; 
   for ( int i = 1; i <= 4; i++ ) 
   {
      cout << "请输入两个整数: ";
      cin >> x >> y;
      if ( multiple( x, y ) )
         cout << y << " is a multiple of " << x << "\n\n";
      else
         cout << y << " is not a multiple of " << x << "\n\n";
   } 

   cout << endl;
} 


bool multiple( int a, int b )
{
   return !( b % a );
} 

