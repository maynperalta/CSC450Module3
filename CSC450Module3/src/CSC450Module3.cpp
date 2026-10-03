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
	cout << "\n--- Integer Values and Pointers ---" << endl;
	
	cout << "\nVariable 1: " << iNum1 << endl;
	cout << "Variable 1 address (&iNum1): " << &iNum1 << endl;
	cout << "Pointer 1 address: " << pNum1 << endl;
	cout << "Pointer 1 value (*pNum1): " << *pNum1 << endl;
	
	cout << "\nVariable 2: " << iNum2 << endl;
	cout << "Variable 2 address (&iNum2): " << &iNum2 << endl;
	cout << "Pointer 2 address: " << pNum2 << endl;
	cout << "Pointer 2 value (*pNum2): " << *pNum2 << endl;
	
	cout << "\nVariable 3: " << iNum3 << endl;
	cout << "Variable 3 address (&iNum3): " << &iNum3 << endl;
	cout << "Pointer 3 address: " << pNum3 << endl;
	cout << "Pointer 3 value (*pNum3): " << *pNum3 << endl;
// Release dynamically allocated memory.	
	cout << "\nDeleting dynamically allocated memory..." << endl;
	delete pNum1;
	delete pNum2;
	delete pNum3;
// Set pointers to 'nullptr' after deleting memory. 	
	pNum1 = nullptr;
	pNum2 = nullptr;
	pNum3 = nullptr;
	
	cout << "\nDynamic memory has been released." << endl;
	
	return 0;
}
