#include <stdio.h> //For printf and scanf
int main() { // Where program starts running
    int score; //Declare an integer variable
    printf("Enter score: ");//Like cout
    scanf("%d" , &score); //%d is the format specifier for integers
    if (score>=60) {
        printf("You passed!\n");
    }else {
        printf("You failed.Try again!\n");
    }
    return 0;
    }