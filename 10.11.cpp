#include "Polynomial.h"
#include <iostream>
#include <string>
#include <Polynomial.h>
using namespace std;
Polynomial::Polynomial(int a)
{
 z=a;
 x=new int[z+1]();
 for(int i=0;i<z+1;++i)
    x[i]=0;

}

Polynomial::~Polynomial()
{
   delete[]x;
}
istream & operator>>(istream& input,Polynomial& a)
{
     for(int i=0;i<a.z+1;++i)
    cin>>a.x[i];
    return input;
}
ostream & operator<<(ostream& output,const Polynomial &a)
{
    for(int i=0;i<a.z+1;++i)
    {
       if(i==0)
    cout<<a.x[i]<<"*"<<"x^"<<i;
    else
    cout<<"+"<<a.x[i]<<" "<<"x^"<<i;
    }
    cout<<endl;
    return output;
}
 Polynomial operator+(Polynomial& a,Polynomial& b)
 {

 }


