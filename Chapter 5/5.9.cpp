#include <iostream>
using namespace std;

int main()
{
   int a = 1;


   for ( int i = 3; i <= 15; i += 2 )
      a *= i;


   cout << "从1到15中奇数的乘积: "
      << a << endl;
}
