
#include <iostream>
#include <string>
using std::cout;
using std::endl;

#include <iostream>
using namespace std;

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
	
	std::string food = "Pizza";  // Variable declaration
	string* ptr = "asd";    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << &ptr << "\n";
	return 0; // indicate successful termination
} // end main

