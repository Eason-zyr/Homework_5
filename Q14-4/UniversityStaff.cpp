//This is the implementation file UniversityStaff.cpp
#include<iostream>
#include<string>
#include "UniversityStaff.h"                                                     //include the header file
using namespace std;

UniversityStaff::UniversityStaff() :name("") {};                                 //constructors

UniversityStaff::UniversityStaff(string theName) :name(theName) {};
//copy constructor
UniversityStaff::UniversityStaff(const UniversityStaff& theObject) { name = theObject.name; }

string UniversityStaff::getName() const { return(name); }                        //get function

UniversityStaff& UniversityStaff::operator=(const UniversityStaff& rtside) {     //overloading = , >> , <<
	name = rtside.name;
	return(*this);
}

istream& operator>>(istream& inStream, UniversityStaff& staffObject) {
	string name;
	cout << "Enter the staff's name >> ";
	cin >> name;
	staffObject.name = name;
	return(inStream);
}

ostream& operator<<(ostream& onStream, const UniversityStaff& staffObject) {
	cout << "The staff's name: " << staffObject.getName() << endl;
	return(onStream);
}
