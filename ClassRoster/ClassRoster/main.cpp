#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"

using namespace std;


int main() {


	// course title, programming language used, WGU student ID, and name
	cout << "Course Title: C867 - Applications PA" << endl;
	cout << "Programming Language: C++" << endl;
	cout << "WGU Student ID: 000451282" << endl;
	cout << "Name: Dillian Rhoades" << endl << endl;

	//instance of Roster class
	Roster classRoster;

	//Add each student to classRosterArray
	classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
	classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
	classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	classRoster.add("A5", "Dillian", "Rhoades", "drhoad3@wgu.edu", 29, 23, 20, 49, SOFTWARE);

	//Print all students
	cout << "*** Printing all students ***" << endl;
	classRoster.printAll();
	cout << endl;

	//Print Invalid emails
	cout << "*** Printing invalid emails ***" << endl;
	classRoster.printInvalidEmails();
	cout << endl;

	//Loop through classRosterArray and for each element
	cout << "*** Printing average days in course for each student ***" << endl;
	for (int i = 0; i < 5; ++i) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getId());
	}
	cout << endl;
          
	//Print by degree program
	cout << "*** Printing students by degree program (SOFTWARE) ***" << endl;
	classRoster.printByDegreeProgram(SOFTWARE);
	cout << endl;

	//remove A3 student
	cout << "*** Removing student with ID A3 ***" << endl;
	classRoster.remove("A3");

	//Print all students again
	cout << "*** Printing all students ***" << endl;
	classRoster.printAll();
	cout << endl;

	//Attempt to remove A3 again to show error
	cout << "*** Attempting to remove student with ID A3 again ***" << endl;
	classRoster.remove("A3");
   


	return 0;
}
