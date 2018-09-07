#include <iostream>
using namespace std;

/*
class Rectangle{
private:
  int x;
  int y;
public:
  int area(int x, int y);
};

int Rectangle::area(int x, int y){
  return x*y;
}
*/




/*Write a program and input two integers in main and pass them to default constructor of the class. Show the result of the additon of two numbers.*/
class Sum{
private:
  int num;
  int num1;
public:
  Sum(int x, int y);
  int getSum(int x, int y);
};


Sum::Sum(int x, int y){
  num=x;
  num1=y;
}

int getSum(){
  return num+num1;
}


int main(){
  /*//class Rectangle 
  Rectangle rt;
  cout<<rt.area(7, 5);*/  
}
