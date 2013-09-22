/*
 * CFraction.cpp
 *
 *  Created on: 16.09.2013
 *      Author: Markus
 */

#include "CFraction.h"
#include <iostream>

using namespace std;

CFraction::CFraction() :
		mp_numerator(new int(0)), mp_denumerator(new int(1)) {
//	Initialisierungsliste
}

CFraction::~CFraction() {
	delete mp_numerator;
	delete mp_denumerator;
}

CFraction::CFraction(int num, int den) {
	mp_numerator = new int();
	mp_denumerator = new int();

	*mp_numerator = num;
	*mp_denumerator = den;

	clog << "Num: " << *mp_numerator << ", Den: " << *mp_denumerator << endl;
}

CFraction::CFraction(const CFraction &fraction) {
	// 1. Versuch
	// this->CFraction(*(fraction.mp_numerator),*(fraction.mp_denumerator));
	// 2. Versuch
	mp_numerator = new int();
	mp_denumerator = new int();

	*mp_numerator = *fraction.mp_numerator;
	*mp_denumerator = *fraction.mp_denumerator;
	clog << "Num: " << *mp_numerator << ", Den: " << *mp_denumerator << endl;

}
void CFraction::writeln() {
	cout << "Num: " << *mp_numerator << ", Den: " << *mp_denumerator << endl;
}
