#ifndef UpDownCount_H
#define UpDownCount_H

#include <iostream>
using namespace std;
class UpDownCount
{
	int count, start, stop, inc, dec;
public:
	UpDownCount();
	UpDownCount(int, int, int, int);
	void setStart(int);
	void setStop(int);
	void setInc(int);
	void setDec(int);
	int getStart(void);
	int getStop(void);
	int getInc(void);
	int getDec(void);
	UpDownCount operator++();
	UpDownCount operator++(int);
	UpDownCount operator--();
	UpDownCount operator--(int);
	friend ostream &operator<<(ostream &, UpDownCount &);

};
#endif