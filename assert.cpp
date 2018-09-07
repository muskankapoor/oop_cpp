#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    int x = 7;
 
    /*  Some big code in between and let's say x 
       is accidentally changed to 9  */
    x = 9;
 
    // Programmer assumes x to be 7 in rest of the code
    assert(x==9);
 
    /* Rest of the code */
 
    return 0;
}

//only if it s wrong then it will pritn a message otherwise it will complie as normal 
