#include <stdio.h>
int main() {
    int score;
    char grade;
    printf("Enter score (0-100): ");
    scanf("%d", &score);
if (score >= 90) {
// Score 90 or above gets an A
grade = 'A';
} else if (score >= 80) {
// Score 80-89 gets a B
grade = 'B';
} else if (score >= 70) {
// Score 70-79 gets a C
grade = 'C';
} else if (score >= 60) {
// Score 60-69 gets a D
grade = 'D';
} else {
// Score below 60 gets an F
grade = 'F';
}
// Display the final grade
// %c is the format specifier for a single character

printf("Grade: %c\n", grade);
return 0;
}