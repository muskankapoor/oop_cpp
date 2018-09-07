#include <iostream>
using namespace std;

#define NAME_SIZE 50 //defines a macro
//fragment of ocde using that nname
class Person{
  int id;
  char name[NAME_SIZE];
  public:
  virtual void aboutMe(){
    cout<<"I am a person";
  }
};


//inheritance example
class Student:public Person{
public:
  void aboutMe(){
    cout<<"I am a student";
  }
};

int main(){
  Person *p=new Student(); //prints i a m student 
  p->aboutMe(); //prints i am a student
  delete p;
  return 0;
}
  
/*A virtual function a member function which is declared within base class and is re-defined (Overriden) by derived class.When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.*/
