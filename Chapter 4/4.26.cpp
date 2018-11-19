#include <iostream>

using namespace std;

int main()
{
    int number=0;
    int a,b,c,d,e;

    cout<<"the number(10000 to 99999):";
    cin>>number;

    if(number>=10000)
    {
        if(number<=99999)
        {

        a=number%10;
        b=(number/10)%10;
        c=(number/100)%10;
        d=(number/1000)%10;
        e=(number/10000)%10;
        if(a==e)
        {
            if(b==d)
            {
               cout<<"yes"<<endl;
            }

        }
else
            cout<<"NO"<<endl;
    }
    }
        else
            cout<<"NO"<<endl;
    return 0;
}
