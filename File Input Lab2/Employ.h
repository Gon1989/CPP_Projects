#pragma once
#include <string>
using namespace std;

class Employ {
private:
	//variables
	string Name;
	int ID;
	int Age;
	string Job;
	int HireYear;

public:
	Employ();
	Employ(string, string, string, string, string);
	
	//print format result
	void printEmploy();
	
	~Employ();
};

