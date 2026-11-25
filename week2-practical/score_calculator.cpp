#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
// ============================================================
// VARIABLE DECLARATIONS
// Each variable is a storage box with a specific data type.
// ============================================================

string studentName; // Text - stores the student's name
string course; // Text - stores the course (BBIT/BCS)

int score1, score2, score3; // Whole numbers - test scores
int totalScore; // Whole number - sum of scores

double average; // Decimal number - average score
double percentage; // Decimal number - percentage
// ============================================================
// CONSTANT DECLARATION
// A constant cannot be changed during program execution.
// ============================================================

const int MAX_SCORE = 100; // Maximum possible score per test
// ============================================================
// WELCOME BANNER
// cout displays text on the screen.
// endl moves to a new line.
// ============================================================

cout << "========================================" << endl;
cout << " STUDENT SCORE CALCULATOR" << endl;
cout << "========================================" << endl;
cout << endl;

// ============================================================
// QUESTION 1: STUDENT NAME
// ============================================================

cout << "Enter student name: ";
getline(cin, studentName); // Reads the full line (including spaces)


// ============================================================
// QUESTION 2: COURSE
// ============================================================

cout << "Enter course (BBIT/BCS): ";
getline(cin, course);

// ============================================================


// QUESTION 3: TEST SCORES
// cin >> reads numbers and stores them in int variables.
// ============================================================

cout << "Enter score for Test 1: ";
cin >> score1;

cout << "Enter score for Test 2: ";
cin >> score2;

cout << "Enter score for Test 3: ";
cin >> score3;
if (score1 < 0 || score1 > 100 ||
    score2 < 0 || score2 > 100 ||
    score3 < 0 || score3 > 100) {
    cout << "Error: score must be between 0 and 100!" << endl;
    return 1;   // stops the program


}
double highest = score1;

if (score2 > highest) {
    highest = score2;
}
if (score3 > highest) {
    highest = score3;
}


cout << "Highest score: " << highest << endl;
// ============================================================
// CALCULATION 1: TOTAL SCORE
// The + operator adds the three scores.
// The = operator assigns the result to totalScore.
// ============================================================

totalScore = score1 + score2 + score3;
// ============================================================
// CALCULATION 2: AVERAGE
// The / operator divides totalScore by 3.
// We use 3.0 (double) to get decimal division.
// If we used 3 (int), the result would be truncated.
// ============================================================

average = totalScore / 3.0;

// ============================================================
// CALCULATION 3: PERCENTAGE
// Formula: (totalScore / maximumPossible) * 100


// maximumPossible = 3 tests * 100 marks = 300
// ============================================================

percentage = (totalScore / 300.0) * 100;
// ============================================================
// DISPLAY REPORT CARD
// fixed << setprecision(2) formats decimals to 2 places.
// ============================================================

cout << endl;
cout << "========================================" << endl;
cout << " REPORT CARD" << endl;
cout << "========================================" << endl;
cout << endl;

cout << "Student: " << studentName << endl;
cout << "Course: " << course << endl;
cout << endl;
cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
cout << endl;
cout << "Total: " << totalScore << "/300" << endl;
cout << "Average: " << fixed << setprecision(2) << average << endl;
cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
cout << endl;

// Determine pass or fail


if (percentage >= 50) {
cout << "Result: PASS" << endl;
} else {
cout << "Result: FAIL" << endl;
}
cout << "========================================" << endl;
if (percentage >= 90) {
    cout << "Grade: A" << endl;
} else if (percentage >= 80) {
    cout << "Grade: B" << endl;
} else if (percentage >= 70) {
    cout << "Grade: C" << endl;
} else if (percentage >= 60) {
    cout << "Grade: D" << endl;
} else {
    cout << "Grade: F" << endl;
}




return 0;
}