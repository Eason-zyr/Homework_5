//using the derived class to print check of the supervisor 
#include <iostream>
#include <string>
#include <cstdlib>
#include "employee.h"                                                    //include the other two classes
#include "salariedemployee.h"
using namespace SavitchEmployees;                                        //a space named SavitchEmployees
using std::cin;
using std::cout;
using std::endl;

class Administrator :public SalariedEmployee {                           //a class named Administrator
public:                                                                  //constructors
	Administrator() :SalariedEmployee(), annualSalary(0), title(""), responsibility(""), name("") {};
	Administrator(double weekly_pay, string title, string resp, string name, string ssn) :title(title), responsibility(resp),
		name(name), SalariedEmployee(name, ssn, weekly_pay) {
		annualSalary = getSalary() * 52;
	}
	void setSupervisor(string name) { this->name = name; }               //set and get functions
	void set_title(string title) { this->title = title; }
	void set_responsibility(string resp) { responsibility = resp; }
	void set_anl_sal(double anl_sal) { annualSalary = anl_sal; }
	string getSupervisor() const { return(name); }
	string get_title() const { return(title); }
	string get_resp() const { return(responsibility); }
	double get_anl_sal() const { return(annualSalary); }
	void read_in();                                                      //read in datas from keyboard
	void print() const;                                                  //print datas and check
	void printCheck();
protected:
	double annualSalary;                                                 //protected variable
private:
	string title;                                                        //private variable
	string responsibility;
	string name;
};

int main(void) {
	cout << "Enter the basic datas for administrator..." << endl;        //read datas from keyboard
	Administrator ADM;                                                   //build an object
	ADM.read_in();

	cout << endl;
	ADM.print();                                                         //call function to print

	cout << endl;
	ADM.printCheck();

	system("pause");
	return(0);
}

void Administrator::read_in() {
	double weekly_pay;                                                   //store user's input
	string name, ssn, title, resp;
	cout << "Enter the Administrator's name >> ";
	cin >> name;
	setSupervisor(name);                                                 //call function to set
	cout << "Enter the Administrator's social security number >> ";
	cin >> ssn;
	setSsn(ssn);
	cout << "Enter the Administrator's title >> ";
	cin >> title;
	set_title(title);
	cout << "Enter the Administrator's responsibility >> ";
	cin >> resp;
	set_responsibility(resp);
	cout << "Enter the Administrator's weekly pay >> ";
	cin >> weekly_pay;
	setSalary(weekly_pay);

	annualSalary = weekly_pay * 52;                                      //calculate annual salary
}

void Administrator::print() const {                                      //print out the basic datas
	cout << "Employee basic datas:" << endl;
	cout << "Name: " << getSupervisor() << endl;
	cout << "SSN: " << getSsn() << endl;
	cout << "Administrator title: " << get_title() << endl;
	cout << "Responsibility: " << get_resp() << endl;
	cout << "Annual Salary: $" << get_anl_sal() << endl;
}

void Administrator::printCheck() {                                       //print out the check
	cout << "Employee Salary Check" << endl;
	cout << "Name: " << getSupervisor() << endl;
	cout << "SSN: " << getSsn() << endl;
	cout << "Your weekly salary: $" << getSalary() << endl;
	cout << "So,your annual salary is $" << getSalary() * 52 << endl;
}