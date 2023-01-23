/*Define a class Time to represent a time with instance variables h,m and s to store hour,
minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
#include<iostream>
using namespace std;
class time
{ int h,m,s;
   public:
       time()
       {
       }
         void settime(int a,int b,int c)
         { h=a;
           m=b;
           s=c;
         }
         void showtime()
         {
           cout<<"Time is = "<<h<<" : "<<m<<" : "<<s<<endl;
         }
         time add(time t)
         { time temp;
             temp.s=s+t.s;
             temp.m=m+t.m;
             temp.h=h+t.h;
             temp.normalize();
           return temp;
         }
         void normalize()
         { m=m+s/60;
           s=s%60;
           h=h+m/60;
           m=m%60;
         }
};
int main()
{ time t1,t2,t3;
    t1.settime(4,40,45);
    t2.settime(5,45,30);

    t3=t1.add(t2);
    t3.showtime();
 return 0;
}
