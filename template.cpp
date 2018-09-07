#include <iostream>
using std::cout;


template <class T>

void swap(T &x, T&y){
  T temp=x;
  x=y;
  y=temp;
}

int main(){
  int n=5;
  int m=8;
  char c1='a';
  char c2='b';
  cout<<"ints";
  swap(n, m);
  cout<<"chars";
  swap(c1 , c2);
}
