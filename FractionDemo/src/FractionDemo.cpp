//============================================================================
// Name        : FractionDemo.cpp
// Author      : Markus Gretler
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "CFraction.h"

int main() {
	CFraction zahl1(3,4);
	CFraction zahl2;

	zahl1.writeln();
	zahl2.writeln();

	return 0;
}
