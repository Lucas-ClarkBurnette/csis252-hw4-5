#include "newclass.h"
#include <string>
#include <iostream>
using namespace std;

ostream& operator << (ostream& out, const newclass& obj)
{
        //add if statements to check if obj.value = 1 or not
	/*
        if (obj.getValue() == 1){
                cout << obj.getValue() << " " << obj.getUnitType();
        }else{
                cout << obj.getValue() << " " << obj.getUnitType() << "'s";
        }
	*/

	out << obj.getValue();
        return out;
}

istream& operator >> (istream& in, newclass& obj)
{
	/*
        //check input, make sure it matches unit
        //pick a unit later, change name class to that unit
        cout << "Enter unit quantity (ex: 7): " << endl;

        in >> obj.getValue;
        cout << "Enter unit name (ex: meters): " << endl;
        if ((in == "meter") or (in=="meters") or (in=="m")){
                in >> obj.getUnitType;
        }else{
   	cout << "unit not found. " << endl;
	*/
	in >> obj.value;
	return in;
}
void newclass::operator = (const newclass& p)
{
	value = p.getValue();
}

bool newclass::operator < (const newclass& p) const
{
   std::cout << "I'm in the operator <\n";
   return getValue() < p.getValue();
}

bool newclass::operator == (const newclass& p) const
{
   std::cout << "I'm in the operator ==\n";
   return getValue() == p.getValue();
}

bool newclass::operator != (const newclass& p) const
{
   std::cout << "I'm in the operator !=\n";
   return not (*this == p);
}

bool newclass::operator >= (const newclass& p) const
{
   std::cout << "I'm in the operator >=\n";
   return not (*this < p);
}

bool newclass::operator <= (const newclass& p) const
{
   std::cout << "I'm in the operator <=\n";
   return *this < p || *this == p;
}

bool newclass::operator > (const newclass& p) const
{
   std::cout << "I'm in the operator >\n";
   return not (*this <= p);
}
//add constructors from newclassImp.cpp

newclass::newclass(int x)
{
   setValue(x);
   setUnitType("");
}

newclass::newclass()
{
	setValue(0);
}
//copy constructor
newclass::newclass(const newclass& n)
{
   setValue(n.getValue());
}

//getters and setters
int newclass::getValue() const
{
   return value;
}
void newclass::setValue(const int& v)
{
        value = v;
}
void newclass::setUnitType(const string &ut)
{
        unitType = ut;
}
string newclass::getUnitType() const
{
        return unitType;
}
string newclass::getAbbrev() const
{
        string s;
        s = "m";
        return s;
}
string newclass::getAlternateSpelling() const
{
        string s;
        s = "metre";
        return s;
}
string newclass::getPlural() const
{
        string s;
        s = "meters, metres";
        return s;
}

