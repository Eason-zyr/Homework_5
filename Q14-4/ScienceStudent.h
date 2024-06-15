//This is the header file of ScienceStudent.h
#ifndef SCIENCESTUDENT_H
#define SCIENCESTUDENT_H

#include<string>
#include "Student.h"                                //include the header file "Student.h"
using namespace std;

class ScienceStudent : public Student {             //define the class ScienceStudent
public:
	ScienceStudent();
	ScienceStudent(string unvs, int num, string name, string sc_dcp, string course);
	ScienceStudent(const ScienceStudent& SS);
	void set_science_discipline(string sc_dcp);
	void set_course(string course);
	string get_science_discipline() const;
	string get_course() const;
	ScienceStudent& operator=(const ScienceStudent& rtside);
	friend istream& operator>>(istream& inStream, ScienceStudent& student);
	friend ostream& operator<<(ostream& onStream, const ScienceStudent& student);
private:
	string science_discipline;
	string course;
};

#endif