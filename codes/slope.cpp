#include <iostream> 
	/* ⬆ Reads as Input/Output Stream. It’s part of the C++ Standard 		
	Library and allows your program to read input (from the keyboard) and write output 
	(to the console, files, etc.).*/

using namespace std;
	/* ⬆ Use standard library. You’re telling the compiler:
	“Don’t make me type std:: every time I use something from the standard library.” */

int main()		// Execution begins from the main. This is a function which return 0.
{				// start of the main function
	double y = 0.0;		
	/* ⬆ Allocate a memory location named y to store a decimal value, and initialize it to 0. */
	double x = 0; 	//The same concept applies here, but with a different memory location name.
	double constant = 0;
	double slope = 0;
	
	y = constant + (slope * x);
	/* ⬆ The calculation is performed from right to left, and the result is stored in the memory location y 
	as a decimal value. */
	cout << "The value of y is "<< y << endl;
	/* ⬆ cout (character output) is used to display text on the console. The << insertion operator 
	sends data into the output stream, which in this case is the screen.*/
	
	return 0;
	/* ⬆ In C++, the function main() must return an integer (int).
	return 0; ends the program and sends the value 0 back to the operating system (OS). */

} //end of main function


