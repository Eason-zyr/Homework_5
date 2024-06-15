//This is the header file Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include<string>
#include "UniversityStaff.h"                  //include header file "UniversityStaff.h"
using namespace std;

class Student {                               //define the class Student
public:
	Student();
	Student(string unvs, int num, string name);
	Student(Student& const student);
	void set_university(string unvs);
	void set_number(int num);
	void set_proctor(string name);
	string get_university() const;
	int get_number() const;
	string get_proctor() const;
	Student& operator=(const Student& rtside);
	friend istream& operator>>(istream& inStream, Student& student);
	friend ostream& operator<<(ostream& onStream, const Student& student);
private:
	string University;
	int number;
	UniversityStaff proctor;
};

#endif