/*Define a class Cube and calculate Volume of Cube and initialise it using constructor.*/
#include<iostream>
using namespace std;
class cube
{ int side;
 public:
    cube(int s)
    { side=s;
     volume();
    }
    void volume()
    {
      cout<<"volume of cube is "<<side*side*side<<endl;
    }
};
int main()
{ int s;
   cout<<"enter side of the cube : ";
   cin>>s;
   cube c(s);
 return 0;
}
