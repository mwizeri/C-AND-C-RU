//=========================
//Activity 4:MULTIPLICATION TABLE USING NESTED LOOPS
//LEARNING OUTCOME: CREATE A NESTED LOOP STRUCTURE
//=========================
//include the input/output library so we can use cin and cout
#include <iostream>
#include <string>
#include <iomanip> //include the input/output manipulation library so we can use setw
//Use the standard namespace so we can write cout instead of std::cout
using namespace std;
//The main function- where the program starts running
int main() {
    //Display a title for the multiplication table
    //"======================" is a string of equal signs to create a visual separator
    cout<<"======================"<<endl;
    cout<<"MULTIPLICATION TABLE(1 TO 5)"<<endl;
    cout<<"======================"<<endl;
    cout<<endl;
    //Header row, runs once before the table
    cout<<setw(6)<<"x"<< " |";
    for (int col=1; col<=5; col++){
        cout<<setw(6)<<col;
    }
    cout<<endl;
    //Separator line under the header
    cout<<"-------+"<<string(30,'-')<<endl;
    //Display a title for the multiplication table
    //"======================" is a string of equal signs to create a visual separator
    //OUTER LOOP: CONTROLS THE ROWS (multicand 1 to 5)
    //PART 1:int i=1; ->Start with row 1
    //Part 2:int<=5; ->Continue until row 5
    //Part 3:i++; ->Move to the next row
    for(int i=1;i<=5;i++){
        cout<<setw(6)<<i<<" |"; //Display the current row number with a field width of 5 characters
        //INNER LOOP:Controls the columns(multiplier 1 to 5
        //This loop runs completely for EACH iteration of the outer loop
        //Part 1:int j=1; ->Start with column 1
        //Part 2:j<=5; ->Continue until column 5
        //Part 3:j++; ->Move to the next column
        for(int j=1;j<=5;j++){
            //Calculate the product of the current row and column
            int product=i*j;
            //Display the product with a field width of 5 characters
            //setw(5) ensures that each number takes up 5 spaces, aligning the columns
            cout<<setw(6)<<i*j;
        }//End of inner loop-all columns for this row are printed
        
        //After the inner loop completes, we move to the next line to start a new row
        //This starts a new row for the next value of i
        cout<<endl;
    }//End of outer loop-all rows are printed
    //Display a closing line of equal signs to indicate the end of the table
    cout<<"======================"<<endl;
    //Return 0 to signal that the program ended successfully
    return 0;

    }