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
                cout<<"������ֵ�������εı�"<<endl;
    }
    else
            cout<<"������ֵ���������εı�"<<endl;
}
