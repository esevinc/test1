
#include <iostream>
using std::cout;
using std::endl;


class aa {
	public:
		// function that displays a welcome message to the GradeBook user
		void displayMessage() {
			cout << "Welcome to our Book!" << endl;
		} // end function displayMessage
}; // end class GradeBook

// function main begins program execution
int main() {
	aa myGradeBook; 
	myGradeBook.displayMessage(); // call object's displayMessage function
	return 0; // indicate successful termination
} // end main

