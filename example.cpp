#include "chemlib.h" // you can include chemlib.h instead of including all the header files
/*
if you want to include only a specified function, you can include the header file that links to the file containing that function:
#include "include/molarmass.h"
and then during compiling you must include the file that contains the function (this an example using g++ as compiler):
g++ example.cpp include/molarmass.cpp
*/

#include <iostream>
using namespace std;

int main() {

	string formula;

	cout << "Insert the chemical formula: ";
	cin >> formula;
	cout << "Molar mass: " << getmolarmass(formula) << " g/mol" << endl;

	return 0;
}
