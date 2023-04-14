//*******************************************************************************
// Course Number and Section: CSCI 1380 - 04
// Course Semester: Fall 2022
// Your Name: Luis Trevino
// --Only if he helped you with the assignment--
// Teammate Name:
// ---------------------------------------------
// Program Description:
//
//       Basic Calculator
//
//*******************************************************************************

//	01) Include your libraries here. Explain the libraries being used with comments.
//library use for inputs and outputs
#include <iostream>

//	DO NOT MODIFY THE LINE BELOW
#include <limits>

using namespace std;

int main(){
	
	// DOuble-presicion variables numA and numB
	double numA, numB;

	// Double-Presicion variable ResultA that holds 0.0
	double resultA = 0.0;

	// Char variable to store the operation signs
	char opSign;

	// integet variable errorCode that holds 0 
	int errorCode = 0;

	//Print "Please Enter an Expression (For Example, 2+5)"
	cout << "Please Enter an Expression (For Example, 2+5)  ";

	//store the imput from the user to the corresponding variables - numA, opSign, numB
	cin >> numA >> opSign >> numB;

	//if opSign is "-" 
	if (opSign == '-')
		//subtract numA and numB
		resultA = numA - numB;

	//if opSign is "-"
	else if (opSign == '+')
		//add numA and numB
		resultA = numA + numB;
	//if opSign is "-" 
	else if (opSign == '*')
		//Multiply numA and numB
		resultA = numA * numB;
	//if opSign is "-" 
	else if (opSign == '/') {
		//And if numB is equal to zero
		if (numB == 0)
			//variable error code equals to 1
			errorCode = 1;
		// Divide numA and numB
		else
			resultA = numA / numB;
	}
	//variable error code equals to 2
	else
	{
		errorCode = 2;
	}
	
	//Check if there is no errors
	switch (errorCode) {
	// if error code is 1
	case  1:
		//print "Illegal operation: Division by zero..." 
		cout << "Illegal operation: Division by zero..." << endl;
		//break from the loop
		break;
		
	// if error code is 2
	case 2:
		//Print "Invalid expression and /or operation..." 
		cout << "Invalid expression and /or operation..." << endl;
		//break from the loop
		break;
	//if there is no errorCodes run the default code
	default:
		// then print the result of the operation - "The Result of [numA] [opSign] [numB] is [resultA]" 
		cout << "The Result of " << numA <<' ' <<  opSign << ' ' << numB << " is " << resultA;
	}

	cout << "\n\n\nPress ENTER key to continue...";

	//	DO NOT MODIFY THE LINE BELOW
	cin.get();
	//	DO NOT MODIFY THE LINE BELOW
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//terminate the program
	return 0;
}