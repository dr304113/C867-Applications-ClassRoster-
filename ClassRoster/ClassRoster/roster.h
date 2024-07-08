#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"
using namespace std;

class Roster {

public:

	//a Roster HAS a list of Students
	Student* classRosterArray[5];
	int studentCount;

	//constructor
	Roster();

	//adds student object to table
	void add(string id, string firstName, string lastName, string email, int age, int days1, int days2, int days3, DegreeProgram degreeProgram);

	//removes student object from table
	void remove(string id);

	//Prints all student objects (tab-separated)
	void printAll();

	//Prints student's average number of days in the three courses
	void printAverageDaysInCourse(string id);

	//Prints only invalid emails
	void printInvalidEmails();

	//Prints student objects by degree program
	void printByDegreeProgram(DegreeProgram degreeProgram);

	//destruct
	~Roster();


};

#endif