#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include"matrix.H"
using namespace std;
ostream &operator<<( ostream &output, const Matrix &number )
{
    output << number.a<<number.b<<number.c<<number.d<<"\n"<<number.e<<number.f<<number.g<<number.h<<endl;
    return output;
}

istream &operator>>(istream &input,Matrix &number)
{
    input>>setw(2)>>number.a;
     input.ignore(2);
     input>>setw(2)>>number.b;
     input.ignore(2);
     input>>setw(2)>>number.c;
     input.ignore(2);
     input>>setw(2)>>number.d;
     input.ignore(2);
     input>>setw(2)>>number.e;
     input.ignore(2);
     input>>setw(2)>>number.f;
     input.ignore(2);
     input>>setw(2)>>number.g;
     input.ignore(2);
     input>>setw(2)>>number.h;
     input.ignore(2);
     return input;
}
