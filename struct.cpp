#include <iostream>
using namespace std;

struct StudentRecord{
  int studentNumber;
  char grade;
};

int main()
{
  StudentRecord yourRecord;
  yourRecord.studentNumber=75;
  yourRecord.grade='a';
  cout<<yourRecord.grade;
  
}
