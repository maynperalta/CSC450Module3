#include <iostream>
using namespace std;

int main() {
	
	int iNum1;
	int iNum2;
	int iNum3;
	
	cout << "Enter an integer: ";
	cin >> iNum1;
	cout << "Enter a second integer: ";
	cin >> iNum2;
	cout << "Enter a third integer: ";
	cin >> iNum3;
	
	int* pointer1 = new int;
	int* pointer2 = new int;
	int* pointer3 = new int;
	
	*pointer1 = iNum1;
	*pointer2 = iNum2;
	*pointer3 = iNum3;
	
	cout << "\n--- Integer Values and Pointers ---\n" << endl;
	
	cout << "Variable 1: " << iNum1 << endl;
	cout << "Pointer 1 address: " << pointer1 << endl;
	cout << "Pointer 1 value: " << *pointer1 << endl;
	
	cout << "Variable 2: " << iNum2 << endl;
	cout << "Pointer 2 address: " << pointer2 << endl;
	cout << "Pointer 2 value: " << *pointer2 << endl;
	
	cout << "Variable 3: " << iNum3 << endl;
	cout << "Pointer 3 address: " << pointer3 << endl;
	cout << "Pointer 3 value: " << *pointer3 << endl;
	
	
	return 0;
}
