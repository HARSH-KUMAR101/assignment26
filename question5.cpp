/*Define a class Date and write a program to Display Date and initialise date object using
Constructors.*/
#include<iostream>
using namespace std;
class date
{ int dd,mm,yy;
  public:
        date(int d,int m,int y)
       { dd=d;
         mm=m;
         yy=y;
        }
      void print()
      {
        cout<<"Date is "<<dd<<"-"<<mm<<"-"<<yy<<endl;
      }
};
int main()
{ int d,m,y;
    cout<<"enter date"<<endl;
    cin>>d>>m>>y;
     date D(d,m,y);
      D.print();
 return 0;
}
