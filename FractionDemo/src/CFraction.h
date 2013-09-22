/*
 * CFraction.h
 *
 *  Created on: 16.09.2013
 *      Author: Markus
 */

#ifndef CFRACTION_H_
#define CFRACTION_H_

class CFraction {
public:
	CFraction();
	virtual ~CFraction();
	CFraction(int num, int den);
	CFraction(const CFraction &fraction);
	void writeln();

private:
	int *mp_numerator;
	int *mp_denumerator;
};

#endif /* CFRACTION_H_ */
