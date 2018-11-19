#include <iostream>

using namespace std;

int main()
{
  double s;
  int h;
  double r;

  cout<<"Enter hours worked(-1 to end):";
  cin>>h;
  cout<<fixed;

  while(h!=-1)
  {
      cout<<"Enter hourly rate of the employee($00.00):";
      cin>>r;

      if(h<=40)
        s=h*r;
      else
        s=40*r+(h-40)*1.5;
      cout<<"Salary is $"<< s;
      cout<<"\n\Enter hours worked(-1 to end):";
      cin>>h;


  }

}
