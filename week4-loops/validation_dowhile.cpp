//==============================
//ACTIVITY 3B:INPUT VALIDATION WITH DO-WHILE LOOP
//Learning outcome:Evaluate while vs do-while for validation
//==============================
//include the input/output library so we can use cin and cout
#include <iostream>
using namespace std;
//The main function- where the program starts running
int main() {
    //Declare an integer variable to store the user's input
    //We initialise it to 0 so the do-while loop will run at least once
    int number=0;
    //do-while loop:executes the body FIRST,then checks the condition
    //This guarantees the body runs at least once
    do {
        //Display a prompt asking the user to enter a positive number
        cout << "Enter a positive number: ";
        //Read the user's input and store it in the variable number
        cin >> number;
        //If the user entered an invalid number, display an error message
        if (number <= 0) {
            cout << "Invalid!";
        }

    }while (number <= 0);//Condition checked AFTER the body runs
    //This line runs only when a valid number is entered
    cout<<"You entered: "<<number<< endl;
    //Return 0 to signal that the program ended successfully
    return 0;

}