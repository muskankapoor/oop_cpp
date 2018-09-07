/*Practice inheritance; create a public base class and a derived class. Create a class called Flower. 
Then create a derived class called Rose. The derived class should have public access to Flower.

Flower has only one member, a string called bloomtime. Rose has only one member, a string called fragrance.*/

#include <iostream>
using namespace std;


//base case
class Flower{
    private:
    string bloomtime;
    public:
    Flower();
    void setString(string flower);
    string getString();
};

Flower::Flower(){
  bloomtime="NA";
}

void Flower::setString(string flower){
    bloomtime=flower;
}

string Flower::getString(){
    return bloomtime;
}

//dervied class

class Rose:public Flower{
    private:
    string fragrance;
public:
  Rose();
  void setFragrance(string frag);
  string getFragrance();
};
    
Rose::Rose(){
  fragrance="NA";
}

void Rose::setFragrance(string frag){
  fragrance=frag;
}

string Rose::getFragrance(){
  return fragrance;
}

int main(){
  //instance of derived class
  Rose rose1;
  //set it
  rose1.setFragrance("sweet");
  cout<<rose1.getFragrance();
}
    
