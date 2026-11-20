//================================================================================
//ACTIVITY 4:GEOMETRY FUNCTION LIBRARY
//Learning outcome: Create and use of library of functions
//================================================================================
#include <iostream>
#include <cmath> //For mathematical functions like pow and sqrt
#include <iomanip> //For output formatting
using namespace std;
//---------------------------
//Consant:PI
//Global constant for the value of pi
//---------------------------
const double PI=3.14159;
//---------------------------
//FUNCTION:areaofCircle
//PURPOSE:Calculate the area of a circle given its radius
//Formula:A=PI*r^2
//Parameters:radius(double)
//Returns:area(double)
//---------------------------
double areaofCircle(double radius){
    //Check for valid input
    if(radius<0){
        cout<<"Error: Radius cannot be negative."<<endl;
        return 0.0;
    }
    //Calculate and return the area
    return PI*radius*radius;
    }
    //--------------------------
    //FUNCTION: areaofRectangle
    //Purpose:Calculate the area of a rectangle
    //Formula: A=Length * Width
    //Parameters:Length and width(double)
    //Returns:area(double)
    //-----------------------------
    double areaofRectangle(double length,double width){
        //check for valid input
        if(length<0|| width<0){
            cout<<"Error.Length and width cannot be negative."<<endl;
            return 0.0; 
        }
        //Calculate and return the area
        return length*width;

    }
//--------------------------------
//FUNCTION:areaofTriangle
//Purpose: Calculate the area of a triangle
//Formula:A=1/2 *base*height
//Parameters:base and height(double)
//Returns:area(double)
//--------------------------------
double areaofTriangle(double base,double height){
    //Check for valid input
    if (base<0 || height<0) {
        cout<<"Error.Base and height cannot be negative."<<endl;
        return 0.0;
    }
    //Calculate and return the area
    return 0.5*base*height;

}
//FUNCTION: displayMenu
//Purpose:Display the menu options
//---------------------------------------  
void displayMenu() {
    cout<<"\n====GEOMETRY CALCULATOR===="<<endl;
    cout<<"1.Area of circle"<<endl;
    cout<<"2.Area of Rectangle"<<endl;
    cout<<"3.Area of Triangle"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your choice: ";

}
//The main function
int main() {
    int choice;
    double radius,length,width,base,height,area;
    //Loop until the user chooses to exit
    do {
        //Display the menu
        displayMenu();
        cin>>choice;
        //Process the user's choice
        switch(choice){
            case 1:
            cout<<"Enter radius: ";
            cin>>radius;
            area=areaofCircle(radius);
            cout<<"Area of circle: "<<fixed<<setprecision(2)<<area<<endl;
            break;
            case 2:
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter width: ";
            cin>>width;
            area=areaofRectangle(length,width);
            cout<<"Area of rectangle: "<<fixed<<setprecision(2)<<area<<endl;
            break;
            case 3:
            cout<<"Enter base: ";
            cin>>base;
            cout<<"Enter height: ";
            cin>>height;
            area=areaofTriangle(base,height);
            cout<<"Area of triangle: "<<fixed<<setprecision(2)<<area<<endl;
            break;
            case 4:
            cout<<"Goodbye!"<<endl;
            break;
            default:
            cout<<"Invalid choice.Please try again."<<endl;
        }
    }while(choice !=4);
    
    return 0;
        
    
}
