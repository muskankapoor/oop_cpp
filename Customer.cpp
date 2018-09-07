#include <iostream>
#include <string>
#include <iostream>
using namespace std;

class Customer{

public:
    Customer();  //default constructor

    Customer(string name, string device = "unknown", int wait_time = 0);   //parameterized constructor

    

    //return: name_

    string getName();

    

    //return: defective_device_

    string getDevice();

    

    //return: wait_time_

    int getWaitTime();

    

    //post: wait_time_ = new_wait_time

    void updateWaitTime(int new_wait_time);

    

private:

    string name_;

    string defective_device_;

    int wait_time_;

    

}; // end Customer


Customer::Customer(){
	cout << "Default constructor is starting" << endl;
}


Customer::Customer(string name, string device, int wait_time){
  name_=name;
  defective_device_=device;
  wait_time_=wait_time;
}

//return: name_
string Customer::getName(){
  return name_;
}


string Customer::getDevice(){
  return defective_device_;
}


int Customer::getWaitTime(){
  return wait_time_;
}

    

    //post: wait_time_ = new_wait_time

void Customer::updateWaitTime(int new_wait_time){
  wait_time_=new_wait_time;
};


/*
class GeniusBar{
public:
    GeniusBar(); //default constructor

    //pre: number_of_customers_ < MAX_NUMBER_OF_CUSTOMERS

    //post: add new_customer to genius_bar_ and increment current_wait_time_ by WAIT_TIME_INCREMENT

    //return: true if number_of_customers_ < MAX_NUMBER_OF_CUSTOMERS, false otherwise

    bool addWaitingCustomer(Customer& new_customer);

    

    //pre: (number_of_customers_ > 0) && (number_of_available_geniuses_ > 0)

    //post: decrement number_of_customers_ and number_of_available_geniuses_

    //return: true if (number_of_customers_ > 0) && (number_of_available_geniuses_ > 0), false otherwise

    bool assignGeniusToCustomer();

    

    //pre: number_of_available_geniuses_ < TOTAL_NUMBER_OF_GENIUSES

    //post: increment number_of_available_geniuses

    //return: true if number_of_available_geniuses_ < TOTAL_NUMBER_OF_GENIUSES, false otherwise

    bool releaseGenius();

    

    //pre: number_of_customers_ > 0

    //post: increment the wait time of each customer on the genius_bar by WAIT_TIME_INCREMENT

    //return: true if number_of_customers_ > 0, false otherwise

    bool updateCustomersWaitTime();

    

    

private:

    static const int TOTAL_NUMBER_OF_GENIUSES = 3;

    static const int MAX_NUMBER_OF_CUSTOMERS = 5;

    static const int WAIT_TIME_INCREMENT = 5;

    int current_wait_time_;

    int number_of_available_geniuses_;

    int number_of_customers_;

    Customer genius_bar_[MAX_NUMBER_OF_CUSTOMERS];

    

    

}; //end GeniusBar*/


