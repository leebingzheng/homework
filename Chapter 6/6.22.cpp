
#include <iostream>
using namespace std;

void square( int ); 

int main()
{
   int side; 

   cout << "ÇëÊäÈë±ß³¤: ";
   cin >> side;
   cout << '\n';

   square( side ); 
   cout << endl;
}

void square( int side )
{
   
   for ( int x = 1; x <= side; x++ ) 
   {
     
      for ( int y = 1; y <= side; y++ )
         cout << '*';

      cout << '\n';
   } 
} 

