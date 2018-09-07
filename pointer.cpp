#include <iostream>
using namespace std;

int main(){
  int *p=new int;
  *p=7;
  cout<<*p<<endl; //7
  int *q=p;
  cout<<*q<<endl; //7
  *p=8;
  cout<<*p<<endl; //8
  cout<<*q;
}
