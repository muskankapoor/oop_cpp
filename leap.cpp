#include <iostream>
using namespace std;

int monthDay(int year, int month){

int days31[]={1, 3, 5, 7, 8, 10, 12};
int days30=[]={4, 6, 9, 11};
string d31="31":
string d30="30";
if (month==2){
    leapYear
for (int i=0; i<sizeof(days31)/sizeof(days31[0]); i++){
    if (month==days31[i]){
        return d31;
    }
}
for (int i=0; i<sizeof(days31)/sizeof(days31[0]); i++){
    if (month==days31[i]){
        return d31;
    }
}

for (int j=0; j<sizeof(days30)/sizeof(days30[0]); i++){
    if (month==days30[i]){
        return d30;
    }
}


}
switch(month){
    case 1:
    cout<<days31;
    break;
    
    case 2:
    leap
    cout<<days31;
    break;
    
bool leapYear(int year, int month){
    if ((year%4!=0)||(year%400!=0)){
        return false;
    }
    else if (year%100!=0){
        return true;
    }
    else{
        return true;
    }
}

int main(){
    leapYear(2000);
    cout<<endl;
    leapYear(2400);
    cout<<endl;
    leapYear(2800);
   
}
