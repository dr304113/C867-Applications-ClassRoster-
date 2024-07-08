#include <iostream>
#include "roster.h"
#include <string>


using namespace std;

Roster::Roster() {
	studentCount = 0;
	for (int i = 0; i < 5; i++) {
		classRosterArray[i] = nullptr;
	}
}

void Roster::add(string id, string firstName, string lastName, string email, int age,
	int days1, int days2, int days3, DegreeProgram degreeProgram) {
	if (studentCount < 5) {
		int days[3] = { days1, days2, days3 };
		classRosterArray[studentCount] = new Student(id, firstName, lastName, email, age, days, degreeProgram);
		studentCount++;
	}
	else {
		cout << "Error -> Roster is already full!" << endl;
	}
}


void Roster::remove(string id) {
	bool exists = false;
	for (int i = 0; i < studentCount; i++) {
		Student student = *classRosterArray[i];
		if (student.getId() == id) {
			exists = true;
			delete classRosterArray[i];
			for (int j = i; j < studentCount - 1; j++) {
				classRosterArray[j] = classRosterArray[j + 1];
			}
			classRosterArray[--studentCount] = nullptr;
			break;
		}
	}
	if (!exists) {
		cout << "ERROR -> Student ID " << id << " not found!" << endl;
	}
}

void Roster::printAll() {
	for (int i = 0; i < studentCount; i++) {
		classRosterArray[i]->print();
	}
}

void Roster::printAverageDaysInCourse(string id) {
	for (int i = 0; i < studentCount; i++) {
		if (classRosterArray[i]->getId() == id) {
			int* days = classRosterArray[i]->getDays();
			cout << "Student ID: " << id << ", Average days in course: " << (days[0] + days[1] + days[2]) / 3 << endl;
			return;
		}
	}
	cout << "Error: Student ID " << id << " not found!" << endl;
}

void Roster::printInvalidEmails() {
	for (int i = 0; i < studentCount; i++) {
		string email = classRosterArray[i]->getEmail();
		if (email.find(' ') != string::npos || email.find('@') == string::npos || email.find('.') == string::npos) {
			cout << "Invalid email address -> " << email << endl;
		}
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	for (int i = 0; i < studentCount; i++) {
		if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
			classRosterArray[i]->print();
		}
	}
}

//Clean Up
Roster::~Roster() {
	for (int i = 0; i < studentCount; i++) {
		delete classRosterArray[i];
	}
}
