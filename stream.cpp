#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string details;
  ifstream inputstream;
  inputstream.open("input.txt");
  while (inputstream>>details){
    cout<<details<<endl;
  }
     
  // inputstream>>details;
  inputstream.close();
}


// >> extracts firnatted data
//<< inserts formatted data
