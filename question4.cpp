/*Define a class Counter and Write a program to Show Counter using Constructor.*/
#include<iostream>
using namespace std;
class counter
{
    public:
static int count;
       counter()
       {
         count++;
       }
       int get_count()
       {
        return count;
       }
};
int counter::count=0;
int main()
{ counter a,b,c;
    cout<<"constructor called "<<a.get_count()<<" times"<<endl;
 return 0;
}
