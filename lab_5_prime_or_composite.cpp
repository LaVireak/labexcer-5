// Accept a number and determine if it is a prime or composite 
#include <iostream> // This is the directive for input and output 
#include <math.h> // Allow to use math function 
using namespace std; // Use standard namespace 
int main() // Main function 
{ // To open the main function block 
    int num; // Declare a number 
    int i; // Declare of valuable i 
    cout << " Enter a number "; // Ask the user to enter a number 
    cin >> num ; // Accepte number 
    for ( i = 2 ; i <= num / 2 ; i++ ) // Show the condition 
    { // Open the for function 
        if ( num % i == 0 ) // Declare the condidion 
        { // Open the if function 
            cout << "Composite " ; // Show the user the composite  
            exit ( 0 ) ; // Exit the if function 
        } // Close the if Function 
    } // Close the for function 
    cout << "Prime " ; // Show the user the prime 
    return 0; // Return 0 to the console 
} // Close the main function 
