#include <iostream>
#include "student.h"
#include "degree.h"


using namespace std;

//constructor
Student::Student(string id,
	string firstName,
	string lastName,
	string email,
	int age,
	int days[],
	DegreeProgram degreeProgram) {
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->days[0] = days[0];
	this->days[1] = days[1];
	this->days[2] = days[2];
	this->degreeProgram = degreeProgram;
}

//setters
void Student::setId(string id) {
	this->id = id;
}
void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}
void Student::setLastName(string lastName) {
	this->lastName = lastName;
}
void Student::setEmail(string email) {
	this->email = email;
}
void Student::setAge(int age) {
	this->age = age;
}
void Student::setDays(int days[]) {
	this->days[0] = days[0];
	this->days[1] = days[1];
	this->days[2] = days[2];
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

//getters
string Student::getId() {
	return id;
}
string Student::getFirstName() {
	return firstName;
}
string Student::getLastName() {
	return lastName;
}
string Student::getEmail() {
	return email;
}
int Student::getAge() {
	return age;
}
int* Student::getDays() {

	return days;
}
DegreeProgram Student::getDegreeProgram() {
	return degreeProgram;
}

//Prints Student object info
void Student::print() {
	cout << "Student ID: " << getId() << "\t";
	cout << "First Name: " << getFirstName() << "\t";
	cout << "Last Name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "Email: " << getEmail() << "\t";
	cout << "Days in Course: [" << getDays()[0] << ", " << getDays()[1] << ", " << getDays()[2] << "]\t";

	//switch to display correct program from enums in degree header
	string programToDisplay = "";
	switch (getDegreeProgram()) {
	case SECURITY: programToDisplay = "Security"; break;
	case NETWORK:programToDisplay = "Network"; break;
	case SOFTWARE:programToDisplay = "Software"; break;
	}
	//now continue printing
	cout << "Degree Program: " << programToDisplay << endl;
}

