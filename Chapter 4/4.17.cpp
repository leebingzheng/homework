#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int a;
    int b;

    cout <<"Please enter the first number:";
    cin>>b;

    while(counter<10)
    {

        cout<<"Please enter the next number£º"<<endl;
        cin>>a;
        counter=counter+1;
        if(a>b)
            b=a;


    }
    cout<<"Largest is "<<b<<endl;


}
