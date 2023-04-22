#include <iostream>
#include "molarmass.h"
using namespace std;

int main() {
	string inputvar; // you can change inputvar with any other var name
	cout << "Insert the chemical formula" << endl;
	cin >> inputvar;
	cout << getmolarmass(inputvar) << endl;
	system("pause");
}
