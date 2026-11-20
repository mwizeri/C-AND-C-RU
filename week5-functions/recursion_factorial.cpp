//================================================================================
//ACTIVITY 3:RECURSION- TWO FACTORIAL SOLUTIONS
//Learning outcome: Evaluate recursive solutions
//================================================================================
#include <iostream>
using namespace std;
//---------------------------
//FUNCTION 1:factorialRecursive(Simple Recursion)
//Purpose:Calculate factorial using simple recursion
//Formula:n!=n*(n-1)!
//Base case:0!=1
///---------------------------
int factorialRecursive(int n){
    //Base case:if n is 0, return 1
    if(n==0){
        return 1;
    }
    //Recursive case: n*factorial of (n-1)
    //This creates a chain of multiplications after recursion returns
    return n*factorialRecursive(n-1);
    }
    //---------------------------
//FUNCTION 2:factorialTailRecursive(Tail Recursion)
//Purpose:Calculate factorial using tail recursion
//Tail recursion:the recursive call is the last operation in the function
//---------------------------
int factorialTail(int n,int accumulator=1){
    //Base case:if n is 0, return the accumulated value
    if(n<=1){
        return accumulator;
    }
    //Tail recursive case:pass the accumulated product
    //The recursive coil is the last thing the function does
    return factorialTail(n-1,n*accumulator);
    }
    //The main function
    int main(){
        //Declare a variable to hold the number
        int number;
        //Prompt the user for input
        cout<<"Enter a number to calculate factorial:";
        cin>>number;
        //Validate input
        if(number<0){
            cout<<"Factorial is not defined for negative numbers."<<endl;
            return 1; //Exit with error code
        }
        //Calculate factorial using simple recursion
       cout<<"\nUsing simple recursion:"<<endl;
       cout<<" "<<number<<"!="<<factorialRecursive(number)<<endl;
        //Calculate factorial using tail recursion
         cout<<"\nUsing tail recursion:"<<endl;
        cout<<" "<<number<<"!="<<factorialTail(number)<<endl;
        //Comparision
        cout<<"\n--Comparison--"<< endl;
        cout<<"Simple recursion:Clear, matches mathematical definition."<<endl;
        cout<<"Tail recursion:More efficient for large n(compiler optimization)."<<endl;

        return 0; //Signal successful completion
    
}