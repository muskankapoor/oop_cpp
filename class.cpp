#include <iostream>
using namespace std;

class Student{
private:
  int age;
  string standard;
  // string firstName, lastName;
public:
  void setAge(int a);
  int getAge();
  void setStandard(string t);
  string getStandard();
};

void Student::setAge(int a){
  age=a;
}

int Student::getAge(){
  return age;
}

void Student::setStandard(string t){
  standard=t;
}

string Student::getStandard(){
  return standard;
}

int main(){
  Student st;
  st.setAge(75);
  st.setStandard("hello");
  cout<<st.getAge();
  cout<<endl;
  cout<<st.getStandard();
  
}
