
muskan kapoor <muskankapoor016@gmail.com>
Fri, Jul 6, 4:17 PM (23 hours ago)

to me

#include <iostream>
#include <cstdlib>

int main(){
        using namespace std;

        int the_number;
        int guess;
        int tries;

        the_number = rand() % 50 + 1;

        cout << "Let's play a game!";
        cout << "I will think of a number 1-10. Try to guess it.";
        cout << endl;
        cin >> guess;
           for (tries = 0; ; tries++) {
               if (guess == the_number){
                   cout << "You guessed it!";
                   //cout << "And it only took you " << tries << " tries.\n";
                   break;
                }
                else if (guess < the_number){
                    cout << "Higher";
                    cin >> guess;
                }
                else if (guess > the_number){
                    cout << "Lower";
                    cin >> guess;
                    }
            }
}
