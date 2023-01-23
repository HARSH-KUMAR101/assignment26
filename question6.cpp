/*Define a class student and write a program to enter student details using constructor and
define member function to display all the details.*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{ char name[20];
  int rollno;
  char grade;
   public:
       student(char a[20],int r,char g)
       { strcpy(name,a);
           rollno=r;
           grade=g;
       }
       void show()
       { cout<<"name  = "<<name<<endl;
         cout<<"roll no = "<<rollno<<endl;
         cout<<"grade = "<<grade<<endl<<endl;
       }

};
int main()
{ student a("harsh",12,'A'),b("abhishek",13,'B'),c("shivam",14,'B');
   a.show();
   b.show();
   c.show();
 return 0;
}
