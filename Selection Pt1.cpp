// Insert library 
#include <iostream>
using namespace std; 

// Create main function 
int main() {
	int numberOne, numberTwo; 
	char op; 

// Get input from user for first number, second number and the operator 
	cout << "Enter first number: "; 
	cin >> numberOne;

	cout << "Enter second number: ";
	cin >> numberTwo;

	cout << "Enter the operator: ";
	cin >> op; 
	// Create a loop using switch statement to cycle through operators to ensure proper calculations 
	switch (op) {
	    case '+':
			cout << numberOne << " + " << numberTwo << " = " << numberOne + numberTwo << endl; 
			break;
		case '-':
			cout << numberOne << " - " << numberTwo << " = " << numberOne - numberTwo << endl; 
			break; 
		case '*': 
			cout << numberOne << " * " << numberTwo << " = " << numberOne * numberTwo << endl;
			break; 
		case '/':
			if (numberTwo != 0) {
				cout << numberOne << "/" << numberTwo << " = " << numberOne / numberTwo << endl;
			}
			else {
				cout << "Division by zero is not allowed. " << endl; 
			}
			break; 
		// Create default to inform user of error 
		default: 
			cout << "Invalid operator. " << endl; 
			break; 
	}
	return 0; 
}