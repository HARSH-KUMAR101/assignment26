/*Define a class Box and write a program to enter length, breadth and height and initialise
objects using constructor also define member functions to calculate volume of the box.*/
#include<iostream>
using namespace std;
class box
{ int length,breadth,height;
  int volume;
public:
    box(int x,int y,int z)
    { length=x;
      breadth=y;
      height=z;
      volume=length*breadth*height;
    }

     void show()
     {
       cout<<"volume of box is "<<volume<<endl<<endl;
     }

};
int main()
{ box a(2,4,6),b(5,10,7);
    a.show();
    b.show();
 return 0;
}
