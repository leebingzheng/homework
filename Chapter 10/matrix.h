#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>

class Matrix
{
    friend std::ostream &operator<<( std::ostream&, const Matrix &);
    friend std::istream &operator>>( std::istream&, Matrix &);
    private:
         int a;
         int b;
         int c;
         int d;
         int e;
         int f;
         int g;
         int h;

};

#endif
