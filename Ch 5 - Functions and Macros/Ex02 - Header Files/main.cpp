#include <iostream>
using namespace std;
#include "prototypes.h"

// This defines a constant value through a preprocessor directive. 
#define PI 3.14159
// It IS NOT typed, so is not good to use. Use a constante, as below, instead.
const double pi = 3.14159;


// This is a macro with arguments.
#define println(X) cout << X << endl;
// It is NOT Typed, tough to debug, and must use escapes if written over more than one line.
// It is PREFERRED to use inline functions instead.
// Inline functions must have their bodies completely contained in a header file for better optimization.
// They increase speed, but also code bloat. 
// Speed is increased because the function code is copied into the referenced location so that the prorgram doesn't have to
//		'jump' to the function.


int main()
{
	cout << boolalpha << isPositive(4) << endl;
	cout << absEqual(4, -4) << endl;

	cout << "This is a pre-compiled macro constant: " << PI << endl;
	cout << "This is a compiled constant: " << pi << endl;

	cout << "This is a global constant: " << superglobal << endl;

	println("Hello there. This is called from a pre-compiled macro.");

	//printlnInline("Hello there. This is called an inline function.");
	cout << "This is the result from an inline function: " << printlnInline(4, 3) << endl;

	return 0;
}