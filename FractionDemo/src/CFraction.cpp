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
		m_numerator(0), m_denumerator(1) {
//	Initialisierungsliste
}

CFraction::~CFraction() {
}

CFraction::CFraction(int num, int den) {
	m_numerator = num;
	m_denumerator = den;
	clog << "Num: " << m_numerator << ", Den: " << m_denumerator << endl;
}

void CFraction::writeln() {
	cout << "Num: " << m_numerator << ", Den: " << m_denumerator << endl;
}
