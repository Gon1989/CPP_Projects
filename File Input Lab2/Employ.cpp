#include "Employ.h"
#include <iostream>


Employ::Employ() {
	Name = "Don't know";
	ID = 0;
	Age = 0;
	Job = "Don't know";
	HireYear = 0;
}

Employ::Employ(string a, string b, string c, string d, string e) : Employ() {
	
	Name = a;
	ID = stoi(b);
	Age = stoi(c);
	Job = d;
	HireYear = stoi(e);
	
}

//printEmploy formating method
void Employ::printEmploy(){
	cout << "Name: " << Name << endl;
	cout << "ID : " << ID << endl;
	cout << "Age : " << Age << endl;
	cout << "Job : " << Job << endl;
	cout << "HireYear : " << HireYear << endl;
	cout << "***********" << endl;
	cout << "\n" << endl;
}

Employ::~Employ() {
}
