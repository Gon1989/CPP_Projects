#include<iostream>
#include<string>
#include<fstream>
#include <vector>
#include <fstream>
#include "Employ.h"

using namespace std;

/*
Desired format

Name:        Megaboz Pibepo
ID:          75534
Age:         52
Job:         Granola Taster
Hire year:   1982
****************************

*/

int main() {

	//variables
	string userInput;
	string line;
	string tmp;
	//vector
	vector<Employ*> recordsVector;
	
	cout << "Enter name of the File: " << endl;
	cin >> userInput;
	//check the input same name of the text
	cout << "\n";

	if (userInput == "test.txt") {
		ifstream myFile("test.txt");
		
			//to skip first number
			getline(myFile, tmp);
			int n = stoi(tmp);

			string Name,Job, ID, Age, HireYear;
			
			//read the lines of my file and splitt them by the | character
			for (int i = 0; i < n; i++) {

				getline(myFile, Name, '|');
				getline(myFile, ID, '|');
				getline(myFile, Age, '|');
				getline(myFile, Job, '|');
				getline(myFile, HireYear);
				
				Employ *employ = new Employ(Name, ID, Age, Job, HireYear);
				
				//add the vector
				recordsVector.push_back(employ);
			}
		
			//run thru Vector and print the final method.
			for (Employ* b : recordsVector) {
				b->printEmploy();
			}

	} //if input is not the name of the file
	//send correct error
	else {
		cout << "worng name file...." << endl;
		cout << "Try again!" << endl;
	}

	system("pause");
	return 0;
}






