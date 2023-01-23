/*Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/
#include<iostream>
using namespace std;
class staticcount
{  static int count;
public:
    int fun(){
    count++;
    }
    void show()
    {
     cout<<"function called "<<count<<" times "<<endl;
    }
};
int staticcount::count;
int main()
{ staticcount a,b,c;
    a.fun();
    b.fun();
    c.fun();
    a.show();
return 0;
}
