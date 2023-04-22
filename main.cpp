#include <iostream>
#include "molarmass.h"
using namespace std;

int main() {
	string inputvar;
	cout << "Insert the chemical formula" << endl;
	cin >> inputvar;
	cout << getmolarmass(inputvar) << endl;
	system("pause");
}
