// Example program
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;

void printVector(vector<float> vIn){//printing the contents of vIns
    //TODO: Complete the function
    vector<float>::iterator it; //make a iterator
    for (it=vIn.begin(); it!=vIn.end(); ++it){
        cout<<*it<<" ";
    }
 }
 


int main (){
    vector<float>vFloat;
  //TODO: create a vector of floats
  
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
  
  std::cout<<"\n\nAdding 10 elements to the vector\n";
  vFloat.assign(10, 8.8);
  //TODO: assign the value 8.8 to 10 elements of the vector
   
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n"; 
  printVector(vFloat);

  //TODO: Complete the Print function in main.hpp 
  // Call the function here to print out each element of vFloat


  return 0;
}
