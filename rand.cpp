#include <iostream>
#include <cstdlib> //random number generator
using std::cout;
using std::endl;

//system generated
/*
int main(){
  for (int i=0; i<10; i++){
      cout<<rand()<<endl;
} 
 }*/


//but have to scale it
int main(){
  for (int i=0; i<10; i++){
    cout<<rand()%11<<endl;
  }
}
  
