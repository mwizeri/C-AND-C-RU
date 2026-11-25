#include <iostream>
using namespace std;
int main() {
// ============================================================
// VARIABLE DECLARATIONS
// These are the "storage boxes" where we keep user answers
// ============================================================

string name; // Stores the user's name (text)
string course; // Stores the course (BBIT or BCS)
string hobby; // Stores the hobby
string reason; // Stores why they chose the course
string expectation; // Stores what they expect to learn
string definition; // Stores their definition of programming
string favoritefood;
string dreamjob;
// ============================================================
// QUESTION 1: NAME
// ============================================================

cout << "========================================" << endl;
cout << " WELCOME TO YOUR FIRST PROGRAM!" << endl;
cout << "========================================" << endl;
cout << endl;

cout << "1. What is your name? ";
getline(cin, name); // Read the full line (including spaces)
// ============================================================
while (name.empty()) {
    cout<<"You didn't enter a name"<< endl;
    cout<<"What is your name? ";
    getline(cin,name);
}
// QUESTION 2: COURSE (BBIT or BCS)
// ============================================================

cout << "2. What course are you doing? (BBIT/BCS): ";
getline(cin, course);
// ============================================================
// QUESTION 3: HOBBY
// ============================================================

cout << "3. What is your hobby? ";
getline(cin, hobby);
// ============================================================
// QUESTION 4: REASON FOR CHOOSING THE COURSE
// ============================================================

cout << "4. Why did you choose this course? ";
getline(cin, reason);
// ============================================================
// QUESTION 5: EXPECTATIONS
// ============================================================

cout << "5. What do you expect to learn in programming? ";
getline(cin, expectation);
// ============================================================
// QUESTION 6: DEFINITION OF PROGRAMMING
// ===========================================================
cout << "6. In your own words, what is programming? ";
getline(cin, definition);
// ============================================================
cout<<"7. What is your favorite food?";
getline(cin, favoritefood);
//===================================
cout <<"8.What is your dream job?";
getline(cin, dreamjob);
//=============================================
// DISPLAY THE SUMMARY
// ============================================================

cout << endl;
cout << "========================================" << endl;
cout << " YOUR PROFILE SUMMARY" << endl;
cout << "========================================" << endl;
cout << endl;

cout << "Name: " << name << endl;
cout << "Course: " << course << endl;
cout << "Hobby: " << hobby << endl;
cout << "Reason: " << reason << endl;
cout << "Expectation: " << expectation << endl;
cout << "Programming is: " << definition << endl;
cout<<"Favorite food is: "<<favoritefood<< endl;
cout<<"Dream job: "<<dreamjob<< endl;

cout <<endl;

cout << "========================================" << endl;
cout << " Great job, "<<name<<"  You are on your way to becoming a programmer!" << endl;
cout << "========================================" << endl;
    return 0;
}