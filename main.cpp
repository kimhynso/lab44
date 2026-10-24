#include "student.h"

int main()
{
  using namespace student2549013;
  student s1;
  s1.input();
  s1.print();
  student s2;
  s2.setid(2345678);
  s2.setscore(23);
  s2.setgrade('A');
  s2.print();

 if(s1.getid()==s2.getid()&&s1.getscore()==s2.getscore()&&s1.getgrade()==s2.getgrade())
    std::cout<<"same\n";
 else
   std::cout<<"not same/n";


   return 0;
}