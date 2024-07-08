#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "degree.h"
using namespace std;



class Student {

private:

	string id;
	string firstName;
	string lastName;
	string email;
	int age;
	int days[3];
	DegreeProgram degreeProgram; //enum class

public:

	//Constructor
	Student(string id, 
		string firstName, 
		string lastName, 
		string email, 
		int age, 
		int days[], 
		DegreeProgram degreeProgram);


	//setters
	void setId(string id);

	void setFirstName(string firstName);

	void setLastName(string lastName);

	void setEmail(string email);

	void setAge(int age);

	void setDays(int days[]);

	void setDegreeProgram(DegreeProgram degreeProgram);


	//getters
	string getId();

	string getFirstName();

	string getLastName();

	string getEmail();

	int getAge();

	int* getDays();

	DegreeProgram getDegreeProgram();

	//Print Student object Info
	void print();


};

#endif