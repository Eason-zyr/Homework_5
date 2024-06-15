//This is the implementation file Student.cpp
#include<iostream>
#include<string>
#include "Student.h"                                                     //include the header file
using namespace std;

Student::Student() :University(""), number(0), proctor("") {};           //constructors

Student::Student(string unvs, int num, string name) :University(unvs), number(num), proctor(name) {};

Student::Student(Student& const student) {
	University = student.University;
	number = student.number;
	proctor = student.proctor;
}

void Student::set_university(string unvs) { University = unvs; }         //set and get functions

void Student::set_number(int num) { number = num; }

void Student::set_proctor(string name) { proctor = name; }

string Student::get_university() const { return(University); }

int Student::get_number() const { return(number); }

string Student::get_proctor() const { return(proctor.getName()); }

Student& Student::operator=(const Student& rtside) {                     //overloading = ,>> ,<<
	University = rtside.University;
	number = rtside.number;
	proctor = rtside.proctor;
	return(*this);
}

istream& operator>>(istream& inStream, Student& student) {
	int number;
	string name;
	
	cout << "Enter student's university >> ";
	cin >> name;
	student.University = name;
	cout << "Enter student's registration number >> ";
	cin >> number;
	student.number = number;
	cout << "Enter student's proctor >> ";
	cin >> name;
	student.proctor = name;
	return(inStream);
}

ostream& operator<<(ostream& onStream, const Student& student) {
	cout << "Student's basic datas:" << endl;
	cout << "University: " << student.University << endl;
	cout << "Registration number: " << student.number << endl;
	cout << "Proctor: " << student.proctor << endl;
	return(onStream);
}