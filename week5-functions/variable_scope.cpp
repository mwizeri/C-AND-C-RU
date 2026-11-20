//=========================
//ACTIVITY 2:VARIABLE SCOPE-GLOBAL VS LOCAL
//Learning Outcome:Analyse variable scope
//=========================
#include <iostream>
using namespace std;
//---------------------------
//gloabal variable declaration
//declared outside all functions=accessible everwhere
//---------------------------
int globalCounter=100;
//---------------------------
//FUNCTION:displayGlobal
//Purpose:Shows the value of the global variable
//---------------------------
void displayGlobal(){
    //This function can access globalCounter because it is global
    cout<<"Inside displayGlobal- globalCounter="<<globalCounter<<endl;
    //Uncomment the line below to see an error:
    //cout<<localCounter;//ERROR:localCounter is not declared here
}
//---------------------------
//FUNCTION:modifyGlobal
//Purpose:Modifes the global variable
//---------------------------
void modifyGlobal(){
    //Change the value of the global variable
    globalCounter=500;
    cout<<"Inside modifyGlobal- globalCounter="<<globalCounter<<endl;
}
//---------------------------
//Function:localDemo
//Purpose:Demonstrates a local variable with the same name
//---------------------------
void localDemo(){
    //Declare a local variable with the same name as the global variable
    int globalCounter=999; //This is a local variable, not the global one
    //This refers to the local variable, not the global one
    cout<<"Inside localDemo- local globalCounter="<<globalCounter<<endl;
    //The global variable remains unchanged
}
    //The main function
    int main() {
        //Declare a local variable in main with the same name as the global variable
        int localCounter=50;
        //Access the global variable
        cout<<"in main:Global globalCounter="<<globalCounter<<endl;
        cout<<"in main:Local localCounter="<<localCounter<<endl;
        //Call the function to display the global variable
        displayGlobal();
        modifyGlobal();
        localDemo();
        //Check the glbal variable after modification
        cout<<"Bakc in main:Global globalCounter="<<globalCounter<<endl;
        //Uncomment to see an error:
        //cout<<globalCounterLocal;//ERROR:not declared
        return 0;
    }




