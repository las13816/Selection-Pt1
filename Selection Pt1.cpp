#include <iostream>
using namespace std; 

int main() {
	int numberOne, numberTwo; 
	char op; 


	cout << "Enter first number: "; 
	cin >> numberOne;

	cout << "Enter second number: ";
	cin >> numberTwo;

	cout << "Enter the operator: ";
	cin >> op; 

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
		default: 
			cout << "Invalid operator. " << endl; 
			break; 
	}
	return 0; 
}