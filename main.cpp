#include <iostream>
#include "molarmass.h"
using namespace std;

int main() {
	string inputvar;
	cout << "Inserisci la formula chimica" << endl;
	cin >> inputvar;
	cout << getmolarmass(inputvar) << endl;
	system("pause");
}