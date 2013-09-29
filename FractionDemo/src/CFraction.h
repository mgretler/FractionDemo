/*
 * CFraction.h
 *
 *  Created on: 16.09.2013
 *      Author: Markus
 */
#include <iostream>

#ifndef CFRACTION_H_
#define CFRACTION_H_

class CFraction {
public:
	CFraction();
	virtual ~CFraction();
	CFraction(int num, int den);
	CFraction(const CFraction& fraction);
	CFraction& operator =(const CFraction& fraction);
	CFraction operator +(const CFraction& fraction);
	CFraction operator -(const CFraction& fraction);
	CFraction operator *(const CFraction& fraction);
	CFraction operator /(const CFraction& fraction);

	CFraction& operator +=(const CFraction& fraction);

	friend std::ostream& operator <<(std::ostream& o, const CFraction& cf);
	void writeln();

private:
	int *mp_numerator;
	int *mp_denumerator;
};

#endif /* CFRACTION_H_ */
