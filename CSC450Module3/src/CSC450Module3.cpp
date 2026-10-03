#include <iostream>

// Function to get and validate integer from user.
int getInteger(const std::string& prompt) {
	std::string input;
		
	while (true) {
		std::cout << prompt;
		std::getline(std::cin, input);
// Reject empty input		
		if (input.empty()) {
			std::cout << "Invalid input. Please enter a whole number.\n";
			continue;
		}
// Allow negative numbers
		size_t start = 0;
		
		if (input[0] == '-') {
			if (input.length() == 1) {
				std::cout << "Invalid input. Please enter a whole number.\n";
				continue;
			}
			start = 1;
		}
// Ensure characters input by user are digits		
		bool valid = true;
		
		for (size_t i = start; i < input.length(); i++) {
			if (input[i] < '0' || input[i] > '9') {
				valid = false;
				break;
			}
		}
		if (!valid) {
			std::cout << "Invalid input. Please enter a whole number.\n";
			continue;
		}
		return std::stoi(input);
	}
}
// Main program.
int main() {
// Declare integer variables and get three values from user.	
	int iNum1 = getInteger("Enter an integer: ");
	int iNum2 = getInteger("Enter a second integer: ");
	int iNum3 = getInteger("Enter a third integer: ");
// Dynamically allocate memory for three integers.	
	int* pNum1 = new int;
	int* pNum2 = new int;
	int* pNum3 = new int;
// Store values in dynamically allocated memory.	
	*pNum1 = iNum1;
	*pNum2 = iNum2;
	*pNum3 = iNum3;
// Display variables and pointer information.	
	std::cout << "\n--- Integer Values and Pointers ---\n";
	
	std::cout << "\nVariable 1: " << iNum1 << '\n';
	std::cout << "Variable 1 address (&iNum1): " << &iNum1 << '\n';
	std::cout << "Pointer 1 address: " << pNum1 << '\n';
	std::cout << "Pointer 1 value (*pNum1): " << *pNum1 << '\n';
	
	std::cout << "\nVariable 2: " << iNum2 << '\n';
	std::cout << "Variable 2 address (&iNum2): " << &iNum2 << '\n';
	std::cout << "Pointer 2 address: " << pNum2 << '\n';
	std::cout << "Pointer 2 value (*pNum2): " << *pNum2 << '\n';
	
	std::cout << "\nVariable 3: " << iNum3 << '\n';
	std::cout << "Variable 3 address (&iNum3): " << &iNum3 << '\n';
	std::cout << "Pointer 3 address: " << pNum3 << '\n';
	std::cout << "Pointer 3 value (*pNum3): " << *pNum3 << "\n";
// Release dynamically allocated memory.	
	std::cout << "\nDeleting dynamically allocated memory...\n";
	delete pNum1;
	delete pNum2;
	delete pNum3;
// Set pointers to 'nullptr' after deleting memory. 	
	pNum1 = nullptr;
	pNum2 = nullptr;
	pNum3 = nullptr;
	
	std::cout << "Dynamic memory has been released.\n";
	
	return 0;
}
