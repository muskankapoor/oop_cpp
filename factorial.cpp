#include <iostream>
using namespace std;

//

int fact(int num){ //3
  int sum=1;         
  //int counter=num-1; //2
  while (num>2){ //3
    int counter=num-1; //2 1
    sum=num*counter; //3* sum=3*22 sum-6
    num=counter; //counter=2;
  }
  return sum;
}

int main(){
  cout<<fact(5); //120
}
