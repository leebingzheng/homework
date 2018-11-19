#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c,d;

    cout<<"Please enter the side"<<endl;
    cin>>a>>b>>c;
    d=a>b?a:b;
    d=d>c?d:c;
       if(a+b+c-d>d)
              {
                cout<<"这三个值是三角形的边"<<endl;
    }
    else
            cout<<"这三个值不是三角形的边"<<endl;
}
