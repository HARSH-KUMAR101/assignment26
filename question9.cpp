/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class bill
{ int ca_num;
  char c_name[20];
  float unit;
  float bill;
public:
      void get()
      { cout<<"enter CA number of consumer : ";
        cin>>ca_num;
        cout<<"enter name of consumer : ";
        cin>>c_name;
        cout<<"enter unit consumed : ";
        cin>>unit;
      }
      void cal_bill()
      { if(unit<=100)
           bill=unit*1.20;
        else if(unit<=200)
            bill=100*1.20+(unit-100)*2;
        else
            bill=100*1.20+100*2+(unit-200)*3;
      }
      void show()
      { cout<<"\n name : "<<c_name<<endl;
        cout<<"CA number : "<<ca_num<<endl;
        cout<<"total bill : "<<bill<<endl;
      }
};
int main()
{ bill b1;
    b1.get();
    b1.cal_bill();
    b1.show();
}
