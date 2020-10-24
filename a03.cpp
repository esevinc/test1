#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> 
using std::string;
using std::getline;


class bb {
	public:
		// function that displays a welcome message to the GradeBook user
		void displayMessage( string courseName, int i ) {
			cout << "Welcome to the grade book for " << courseName << "! "
			     <<i<< endl;
		} // end function displayMessage
}; 


// function main begins program execution
int main() {
	string nameOfCourse;
	bb myGradeBook; // create a GradeBook object named myGradeBook
	// prompt for and input course name
	cout << "Please enter the course name:" << endl;
	getline( cin, nameOfCourse ); // read a course name with blanks
	cout << endl; // output a blank line

	myGradeBook.displayMessage( nameOfCourse, 6 );

} // end main

