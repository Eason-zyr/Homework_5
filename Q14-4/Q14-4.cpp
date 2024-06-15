//This is the main function to test the class ScienticeStudent
#include<iostream>
#include<string>
#include "UniversityStaff.h"                               //include the header files
#include "Student.h"
#include "ScienceStudent.h"
using namespace std;

int main(void) {
	ScienceStudent std, copy;                              //build two objects
	                                                       //testing overloading >> and <<
	cout << "Enter the Science student's basic informations..." << endl;
	cin >> std;
	cout << endl << std;
	                                                       //testing overloading =
	cout << endl << "Followingis a copy of above informations..." << endl;
	copy = std;
	cout << copy;

	system("pause");
	return(0);
}