//=======================
//Activity 1:PASS-BY-VALUE- THE SWAP THAT DOESN'T SWAP
//LEARNING OUTCOME:APPLY PASS-BY-VALUE
//=========================
//Include the input/output for cout and cin
#include <iostream>
using namespace std;
//---------------------------
//FUNCTION:swapByReference
//Purpose:Attempts to swap two integers
//Parameterss:a and b(passed by value-copies are made)
//Returns:voide(nothing)
//-----------------------------------
void swapByReference(int &a, int &b){
    //Display the value inside the function before swapping
    cout<<"Inside function- Before swap:a=<<"<<a<<",b="<<b<<endl;
    //Declare a temporary variable to hold the value of a
    int temp=a;
    //Assign the value of b to a
    a=b;
    //Assign the value of temp to b
    b=temp;
    //Display the value inside the function after swapping
    cout<<"Inside function- After swap:a=<<"<<a<<",b="<<b<<endl;
    //The function ends here.The original variables are NOT changed
}
//The main function-where the program starts
int main(){
    //Declare two integer variables in main
    int x=10;
    int y=20;
    //Display the values before calling the function
    cout<<"Before calling swapByReference:"<<endl;
    cout<<"x="<<x<<",y="<<y<<endl;
    //Call the function,passing x and y by reference
    //References to x and y are sent to the function
    swapByReference(x,y);
    //Display the values after calling the function
    cout<<"After calling swapByReference:"<<endl;
    cout<<"x="<<x<<",y="<<y<<endl;
    //Explain why the values did not change
    cout<<"\nExplanation: The function received references to x and y."<<endl;
    cout<<"Changes made inside the function affect the originals."<<endl;
    //Return 0 to signal completion of the program
    return 0;
}