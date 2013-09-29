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

	// clog << "Num: " << *mp_numerator << ", Den: " << *mp_denumerator << endl;
}

CFraction::CFraction(const CFraction &fraction) {
	// 1. Versuch
	// this->CFraction(*(fraction.mp_numerator),*(fraction.mp_denumerator));
	// 2. Versuch
	mp_numerator = new int();
	mp_denumerator = new int();

	*mp_numerator = *fraction.mp_numerator;
	*mp_denumerator = *fraction.mp_denumerator;
	// clog << "Num: " << *mp_numerator << ", Den: " << *mp_denumerator << endl;

}

CFraction& CFraction::operator =(const CFraction& fraction) {
	mp_numerator = new int();
	mp_denumerator = new int();

	*mp_numerator = *fraction.mp_numerator;
	*mp_denumerator = *fraction.mp_denumerator;
	// clog << "Num: " << *mp_numerator << ", Den: " << *mp_denumerator << endl;

	return *this;
}

CFraction& CFraction::operator +=(const CFraction& fraction) {

	*this->mp_numerator += *fraction.mp_numerator;
	*this->mp_denumerator += *fraction.mp_denumerator;

	return *this;
}

CFraction CFraction::operator +(const CFraction& fraction) {

	int num = *this->mp_numerator + *fraction.mp_numerator;
	int den = *this->mp_denumerator + *fraction.mp_denumerator;

	return CFraction(num, den);
}

CFraction CFraction::operator -(const CFraction& fraction) {

	int num = *this->mp_numerator - *fraction.mp_numerator;
	int den = *this->mp_denumerator - *fraction.mp_denumerator;

	return CFraction(num, den);
}

CFraction CFraction::operator *(const CFraction& fraction) {

	int num = *this->mp_numerator * *fraction.mp_numerator;
	int den = *this->mp_denumerator * *fraction.mp_denumerator;

	return CFraction(num, den);
}

CFraction CFraction::operator /(const CFraction& fraction) {

	int num = *this->mp_numerator / *fraction.mp_numerator;
	int den = *this->mp_denumerator / *fraction.mp_denumerator;

	return CFraction(num, den);
}

ostream& operator <<(ostream& o, const CFraction& cf) {
	return o << "Num: " << *cf.mp_numerator << ", Den: " << *cf.mp_denumerator
			<< endl;
}
void CFraction::writeln() {
	cout << "Num: " << *mp_numerator << ", Den: " << *mp_denumerator << endl;
}

