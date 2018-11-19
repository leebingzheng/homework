#include <iostream>
using namespace std;

int main()
{
   double g,m;
   double MPG,TMPG;
   double TotalGallons=0;
   double TotalMiles=0;

   cout << "Enter miles driven (-1 to quit): ";
   cout << fixed;
   cin >> m;

   while (m != -1)
   {
      cout << "Enter gallons used: ";
      cin >> g;

      TotalMiles=TotalMiles+m;
      TotalGallons=TotalGallons+g;

      if (g!=0)
      {
       MPG=m/g;
         cout << "MPG this trip: " << MPG;
      }

      if (TotalGallons!=0)
      {
        TMPG=TotalMiles/TotalGallons;
         cout << "\nTotal MPG: " << TMPG;
      }

      cout << "\n\nEnter miles driven (-1 to quit): ";
      cin >> m;
   }
