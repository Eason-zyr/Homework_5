//This is the implementation file ScienceStudent.cpp
#include<iostream>
#include<string>
#include "ScienceStudent.h"
#include "Student.h"                                                        //include the header file
using namespace std;

ScienceStudent::ScienceStudent() :science_discipline(""), course("") {};    //constructors

ScienceStudent::ScienceStudent(string unvs, int num, string name, string sc_dcp, string course) :
	Student(unvs, num, name), science_discipline(sc_dcp), course(course) {};

ScienceStudent::ScienceStudent(const ScienceStudent& SS) {                  //copy constructor
	this->set_university(SS.get_university());
	this->set_number(SS.get_number());
	this->set_proctor(SS.get_proctor());
	science_discipline = SS.science_discipline;
	course = SS.course;
}
                                                                            //set and get functions
void ScienceStudent::set_science_discipline(string sc_dcp) { science_discipline = sc_dcp; }

void ScienceStudent::set_course(string course) { this->course = course; }

string ScienceStudent::get_science_discipline() const { return(science_discipline); }

string ScienceStudent::get_course() const { return(course); }
                                                                           //overloading =, >>, << 
ScienceStudent& ScienceStudent::operator=(const ScienceStudent& rtside) {
	this->set_university(rtside.get_university());
	this->set_number(rtside.get_number());
	this->set_proctor(rtside.get_proctor());
	science_discipline = rtside.science_discipline;
	course = rtside.course;
	return(*this);
}

istream& operator>>(istream& inStream, ScienceStudent& student) {
	int num;
	string unvs,pro,sd,course;

	cout << "Enter student's university >> ";
	cin >> unvs;
	student.set_university(unvs);
	cout << "Enter student's registration number >> ";
	cin >> num;
	student.set_number(num);
	cout << "Enter student's proctor >> ";
	cin >> pro;
	student.set_proctor(pro);
	cout << "Enter student's science discipline >> ";
	cin >> sd;
	student.science_discipline = sd;
	cout << "Enter student's course >> ";
	cin >> course;
	student.course = course;
	return(inStream);
}

ostream& operator<<(ostream& onStream, const ScienceStudent& student) {
	cout << "Student's basic datas:" << endl;
	cout << "University: " << student.get_university() << endl;
	cout << "Registration number: " << student.get_number() << endl;
	cout << "Proctor: " << student.get_proctor() << endl;
	cout << "Science discipline: " << student.science_discipline << endl;
	cout << "Course: " << student.course << endl;
	return(onStream);
}