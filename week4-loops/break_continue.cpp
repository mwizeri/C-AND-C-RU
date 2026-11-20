//ACTIVITY 2:BREAK AND CONTINUE IN LOOPS
//Learning outcome: Analyse break and continue statements
//==============================================
//include the input/output library so we can use cin and cout
#include <iostream>

//Use the standard namespace so we can write cout instead of std::cout
using namespace std;

//The main function- where the program starts running
int main() {

    //Display a header so we know what this program does
    cout<<"Number filter: Skip multiples of 3, stop at 15"<<endl;
    //Start a for loop from 1 to 20
    //Part 1:int i=1; ->Initialisation: start counting from 1
    //Part 2: i<=20; ->Loop while i is 20 or less
    //Part 3: i++; ->Increment: increase i by 1 after each iteration
    for(int i=1; i<=20; i++) {
        //CHECK 1: If i is exactly 15, stop the loop immediately
        //'break' exits the loop immeddiately, skipping any remaining iterations
        if(i==15) {
            //Display a message to show we are breaking
            cout<<"Breaking at "<<i<<"!"<<endl;
            //Exit the loop immediately-no more iterations will be executed
            break;
        }
        //CHECK 2: If i is divisible by 3, skip it
        //The % operator gives the remainder
        //If i%3==0, then i is a multiple of 3(eg., 3,6,9,12,15
        if(i % 3==0){
            //'continue' skips the rest of the current iteration and goes to the next one
            //and jumps back to the increment(i++)
            continue;
        }
        //DISPLAY:This line only runs if we did NOT break and did NOT continue
        //So it prints numbers that are NOT multiples of 3, until we hit 15
        cout<<i<<endl;
    }//End of loop
    //Move to a new line after the loop is done
    cout<<endl;
    //Return 0 to signal that the program ended successfully
    return 0;
 }
 