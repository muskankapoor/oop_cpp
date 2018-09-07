#include <iostream>
using namespace std;

int main(){
  int a=5;
  int &b=a;
  b=7;
  cout<<a;
}
/*references cannot be null and cannot be reassinged to antoher peince ofmmeotyr like ponters*/
