#include <fstream>
#include <iostream>
#include <string>
#include "newclass.h"
using namespace std;

int main(){
//default constructor	
newclass test1;
cout << "default initialization... " << endl;
cout << test1.getValue() << " " << test1.getUnitType() << endl;
test1.setUnitType("meters");
test1.setValue(7);
cout << "changed attributes using setters... " << endl;
cout << test1.getValue() << " " << test1.getUnitType() << endl;

newclass test2 = test1;
cout << "testing copy constructor... " << endl;
cout << test2.getValue() << " " << test2.getUnitType() <<endl;

cout << "Now testing abbrevation, spelling, and plural functions... " << endl;
test2.setValue(1);
test2.setUnitType("meter");

cout << test1.getAbbrev() << endl;
cout << test1.getAlternateSpelling() << endl;
cout << test1.getPlural() << endl;

cout << "Now testing overloaded operators... " << endl;
cout << "set class1 to 7 meters and class2 to 1 meter... " << endl;

cout << (test1 == test2) << endl;
cout << (test1 != test2) << endl;
cout << (test1 >= test2) << endl;
cout << (test1 <= test2) << endl;
cout << (test1 < test2) << endl;
cout << (test1 > test2) << endl;

cout << "Now testing overloaded operators on equal classes (should have the same attributes... " << endl;
newclass test3;
test3.setValue(1);
test3.setUnitType("meter");
cout << (test3 == test2) << endl;
cout << (test3 != test2) << endl;
cout << (test3 >= test2) << endl;
cout << (test3 <= test2) << endl;
cout << (test3 < test2) << endl;
cout << (test3 > test2) << endl;


return 0;




}
