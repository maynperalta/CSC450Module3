#include <iostream>
using namespace std;

int main() {
// Declare integer variables.	
	int iNum1;
	int iNum2;
	int iNum3;
// Get first integer input from user.	
	cout << "Enter an integer: ";
	while (!(cin >> iNum1)) {
		cout << "Invalid input. Please enter an Integer: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	};
	cout << "Enter a second integer: ";
	while(!(cin >> iNum2)) {
		cout << "Invalid input. Please enter an Integer: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	};
	cout << "Enter a third integer: ";
	while (!(cin >> iNum3)) {
		cout << "Invalid input. Please enter an Integer: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	};
// Dynamically allocate memory for three integers.	
	int* pNum1 = new int;
	int* pNum2 = new int;
	int* pNum3 = new int;
// Store values in dynamically allocated memory.	
	*pNum1 = iNum1;
	*pNum2 = iNum2;
	*pNum3 = iNum3;
// Display variables and pointer information.	
	cout << "--- Integer Values and Pointers ---" << endl;
	cout << endl;
	
	cout << "Variable 1: " << iNum1 << endl;
	cout << "Pointer 1 address: " << pointer1 << endl;
	cout << "Pointer 1 value: " << *pointer1 << endl;
	cout << endl;
	
	cout << "Variable 2: " << iNum2 << endl;
	cout << "Pointer 2 address: " << pointer2 << endl;
	cout << "Pointer 2 value: " << *pointer2 << endl;
	cout << endl;
	
	cout << "Variable 3: " << iNum3 << endl;
	cout << "Pointer 3 address: " << pointer3 << endl;
	cout << "Pointer 3 value: " << *pointer3 << endl;
	cout << endl;
	
	cout << "Deleting pointers..." << endl;
	delete pointer1;
	delete pointer2;
	delete pointer3;
	cout << endl;
	
	pointer1 = nullptr;
	pointer2 = nullptr;
	pointer3 = nullptr;
	
	cout << "\nDynamic memory has been released." << endl;
	
	return 0;
}
