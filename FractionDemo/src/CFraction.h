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
	void writeln();

private:
	int m_numerator;
	int m_denumerator;
};

#endif /* CFRACTION_H_ */
