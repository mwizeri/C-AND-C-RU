// ============================================================
// ACTIVITY 1: PASS-BY-VALUE - THE SWAP THAT DOESN'T SWAP (C VERSION)
// Learning Outcome: Apply pass-by-value
// ============================================================

// Include the standard input/output library for printf
#include <stdio.h>

// ------------------------------------------------------------
// FUNCTION: swapByValue
// Purpose: Attempts to swap two integers
// Parameters: a and b (passed by value - copies are made)
// Returns: void (nothing)
// ------------------------------------------------------------
void swapByPointer(int *a, int *b) {
// Dereference the pointer to get the value
// printf uses %d for integers and \n for newline
printf(" Inside function - Before reference: a = %d, b = %d\n", *a, *b);
// Declare a temporary variable to hold 'a'
int temp = *a;

// Assign the value of 'b' to 'a'
*a = *b;

// Assign the value of 'temp' (original a) to 'b'
*b = temp;


printf(" Inside function - After reference: a = %d, b = %d\n", *a, *b);

// The function ends here. The original variables are NOT changed.
}

// The main function - where the program starts
int main() {
// Declare two integer variables in main
int x = 10;
int y = 20;

// Display the values before calling the function
printf("Before calling swapByPointer:\n");
printf(" x = %d, y = %d\n", x, y);

// Call the function, passing x and y by value
// Copies of x and y are sent to the function
swapByPointer(&x, &y);

// Display the values after calling the function
printf("After calling swapByPointer:\n");
printf(" x = %d, y = %d\n", x, y);

// Return 0 to signal successful completion
return 0;
}