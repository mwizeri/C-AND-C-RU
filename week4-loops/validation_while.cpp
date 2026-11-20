//==========================
//ACTIVITY 3A:INPUT VALIDATION WITH WHILE LOOP
//Learning outcome:Evaluate while vs do-while for validation
//==========================
//include the input/output library so we can use cin and cout
#include <iostream>
using namespace std;
//The main function- where the program starts running
int main() {
    //Declare an integer variable to store the user's input(N)
    int number;

    //Display a prompt asking the user to enter a positive number
    cout << "Enter a positive number: ";

    //Read the first input from the user before the loop
    //This is necessary because the while loop checks the condition first
    cin >> number;
    //While loop:checks condition BEFORE executing the body
    //If the user entered a valid number(positive), the loop will not run
    //If the user entered an invalid number, the loop repeats
    while (number <= 0) {
        //Display an error message to inform the user of the invalid input
        cout << "Invalid input! Please enter a positive number: ";
        //Read the user's input again
        cin >> number;
    }//End of while loop - execution returns to the condition check
    //This line runs only when a valid number is entered
    cout<<"You entered: "<<number<< endl;
    //Return 0 to signal that the program ended successfully
    return 0;
}