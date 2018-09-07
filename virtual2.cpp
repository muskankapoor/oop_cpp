/*virtual function helps implement a member fuction ofr the derived class instead of the base class*/


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
  virtual bool addCourse(string s)=0;
};


//inheritance example
class Student:public Person{
public:
  void aboutMe(){
    cout<<"I am a student";
  }
  bool addCourse (string s){
    cout<<"Added course "<<s<< " to student "<<endl;
    return true;
  }
};

int main(){
  Person *p=new Student(); //prints i a m student 
  p->aboutMe(); //prints i am a student
  p->addCourse("history");
  delete p;
  return 0;
}
