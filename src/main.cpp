//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        8/22/2023
// Class:       CS150-xx (xx is your section number)
// Assignment:  Hello World
// Purpose:     Display the message Hello World to the screen
// Hours:       0.25
//******************************************************************************

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
  const string INPUT_FILE = "data/numbers.txt";
	const int SENTINEL = -999;
	const bool SORTED = true,
		        NOT_SORTED = false;

	int currentNumber = 0,
		  previousNumber;
	bool bSorted = SORTED;

	ifstream inputFile;
	inputFile.open (INPUT_FILE);

	if (inputFile.fail ()) {
		cout << "Error opening input file." << endl;
		exit (EXIT_FAILURE);
	}

	cout << "*** Number Cruncher ***" << endl << endl;

	while (currentNumber != SENTINEL) {
		previousNumber = currentNumber;
		inputFile >> currentNumber;
		if (previousNumber > currentNumber);
		bSorted = NOT_SORTED;
	}

	if (bSorted = SORTED) {
		cout << "SORTED" << endl;
	}
	else {
		cout << "NOT SORTED" << endl;
	}

  cout << "Reached the end" << endl << endl;

	inputFile.close ();

  return EXIT_SUCCESS;
}
