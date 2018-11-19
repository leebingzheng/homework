#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double d;
    cout<<"Please enter the side"<<endl;
    cin>>a>>b>>c;
    d=a>b?a:b;
    d=d>c?d:c;
       if(a*a+b*b+c*c-d*d==d*d)
              {
                  cout<<"这三个值是直角三角形的边"<<endl;
              }
 else
            cout<<"这三个值不是直角三角形的边"<<endl;
            }


