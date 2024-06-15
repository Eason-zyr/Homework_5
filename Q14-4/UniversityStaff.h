//This is the header file UniversityStaff.h
#ifndef UNIVERSITYSTAFF_H
#define UNIVERSITYSTAFF_H

#include<string>
using namespace std;

class UniversityStaff {                            //define the class UniversityStaff
public:
	UniversityStaff();
	UniversityStaff(string theName);
	UniversityStaff(const UniversityStaff& theObject);
	string getName() const;
	UniversityStaff& operator=(const UniversityStaff& rtside);
	friend istream& operator>>(istream& inStream, UniversityStaff& staffObject);
	friend ostream& operator<<(ostream& onStream, const UniversityStaff& staffObject);
private:
	string name;
};

#endif