/*Define a class Bank and define member functions to read principal , rate of interest and
year. Another member functions to calculate simple interest and display it. Initialise all details
using constructor.*/
#include<iostream>
using namespace std;
class Bank
{ int principle,year;
  float rate,si;
public:
    Bank(int p,float r,int t)
    { principle=p;
      rate=r;
      year=t;
      si=(principle*rate*year)/100;
    }
    show()
    {
      cout<<"interest earned "<<si<<endl;
    }
};
int main()
{ Bank a(10000,7.5,5),b(15000,5.5,10);
    a.show();
    b.show();
}
