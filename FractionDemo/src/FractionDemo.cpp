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
	CFraction zahl1(3, 4);		// mit ‹bergabeparametern
	CFraction zahl2;			// mit Standardwerten initialisieren
	CFraction zahl3(zahl1);		// als Copy Konstruktor
	CFraction zahl4 = zahl2;	// mit Zuweisungsoperator

	zahl1.writeln();
	zahl2.writeln();
	zahl3.writeln();
	zahl4.writeln();

	// Test zu Aufgabe 5
	CFraction aFraction;
	aFraction = CFraction(13, 42);
	aFraction.writeln();

	// Aufgabe 7
	CFraction a(3, 5), b(1, 7), c;
	a.writeln();
	b.writeln();
	c = a + b;
	c.writeln();
	c += b;
	c.writeln();

	cout << "c= " << c;

	c = a + b;
	cout << "a+b=c= " << c;
	c = a - b;
	cout << "a-b=c= " << c;
	c = a * b;
	cout << "a*b=c= " << c;
	c = a / b;
	cout << "a/b=c= " << c;

	return 0;
}
