#include <iostream>
using namespace std;

 int main()
{
int a=0;
int b=1;
int num=0;
int c=0;


std::cin>>a;
while (a>0)
{
    c =a%10;
    num=num+b*c;
    a=a/10;
    b=b*2;
}

cout <<num<<endl;
return 0;
}
