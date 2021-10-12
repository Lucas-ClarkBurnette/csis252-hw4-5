#include <iostream>
#include <string>

#ifndef _NEWCLASS_H_
#define _NEWCLASS_H_

using namespace std;

class newclass
{
	public:
	//overloading operators
	void operator = (const newclass &x);
	bool operator == (const newclass&) const;
	bool operator != (const newclass&) const;
	bool operator > (const newclass&) const;
	bool operator < (const newclass&) const;
	bool operator >= (const newclass&) const;
	bool operator <= (const newclass&) const;

	//getters and setters
	void setValue(const int& x);
	int getValue() const;
	string getUnitType() const;
	void setUnitType(const string& x);
	string getAbbrev() const;
	string getAlternateSpelling() const;
	string getPlural() const;

	//constructors
	newclass(int x);
	newclass(const newclass &p1);
	newclass();
	friend istream& operator >> (istream&,newclass&);

	private:
	int value;
	string unitType;

};

ostream& operator << (ostream&,const newclass&);
//friend istream& operator >> (istream&,newclass&);

#endif
