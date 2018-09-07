#include <iostream>
using namespace std;

#define NAME_SIZE 50 //defines a macro
//fragment of ocde using that nname
class Person{
  int id;
  char name[NAME_SIZE];
  public:
  void aboutMe(){
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
  Student *p=new Student(); //prints i a m student 
  p->aboutMe(); //prints i am a student
  delete p;
  return 0;
}
  
