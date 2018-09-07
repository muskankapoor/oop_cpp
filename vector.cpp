#include <iostream>
#include <vector>
using namespace std;

int main(){
  /*
  vector<int>vec1(10); //type name and size
  vector<double>vec2(5);
  cout<<vec1.at(0); //calling at a point 
  bool emp1=vec2.empty(); //check if empty or not 
  vec1.push_back(100); //add an element 
  for (int i=0; i<vec1.size(); i++){
    cout<<vec1[i]<<endl;
  }
  cout<<"vec2"<<endl;
  for (int i=0; i<vec2.size(); i++){
    cout<<vec2[i]<<endl;
    }*/
   vector<int> v;

   cout << "Initial vector size = " << v.size() << endl;

   v.resize(5, 10);
   cout << "Vector size after resize = " << v.size() << endl;

   cout << "Vector contains following elements" << endl;
   for (int i = 0; i < v.size(); ++i)
      cout << v[i] << endl;

   return 0;

}
