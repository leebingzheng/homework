
#include <iostream>
using namespace std;

void square( int, char ); 

int main()
{
   int side; 
   char character; 
   cout << "�������ַ������ͱ߳�: ";
   cin >> character >> side;
   cout << '\n';

   square( side, character ); 
   cout << endl;
} 

void square( int side, char fillCharacter )
{
   for ( int x = 1; x <= side; x++ ) 
   {
      for ( int y = 1; y <= side; y++ )
         cout << fillCharacter;
      cout << '\n';
   } 
} 

