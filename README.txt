file		function		description
---------	------------		------------
main.cpp	main			test operations and member functions of 					the class "newclass"

newclass.h	newclass		newclass class specification

newclass.cpp	newclass methods and	newclass class implementation
		overloaded operators

Testing methods
---------------
Constructor:
I initialized a new class type called test1 using a default constructor.
Program was able to compile without any errors
Used getter and setter to give the default constructor its attributes
conducted a second test to initialize a class that with non-default attributes

Copy constructor:
initialized a copy constructor and set it equal to normal constructor
used getters to compare the values assigned, they should be the same

Overloaded operators:
initialized two types of class that were not equal.
used each comparison operator between them.
Unexpectedly, the comparisons outputted 1 or 0 instead of true or false, but the logic was correct.
Another issue is the print statements "im in the operator "<operator here>"" ended up being printed multiple times for some operators. I think its because other operators referred to the comparison operator in their definitions
conducted similar tests for two classes that are equal.

additional functions:
made sure that the functions that return the plural, abbreviation and alternate names of the unit type were able to output the desired strings. in my case, I chose to go with meters.


Notable Issue(s):
unable to refer to a class type by just the attribute, needed to use getter
ex: class.value doesnt work, need to use class.getValue()
