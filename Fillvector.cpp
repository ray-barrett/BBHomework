//: C02E05:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> v;
	ifstream in("Fillvector.cpp");
	string line;
	while(getline(in, line))
		v.push_back(line);

	// Made problem too complex to start /////////////////////////////
	// Reverse the vector
	//reverse(v.begin(), v.end());
	// Iterator needed to access the new vector
	//for(vector<string>::iterator it = v.begin(); it != v.end(); it++)
	//	cout << *it << endl;
	//////////////////////////////////////////////////////////////////
	
	// Add line numbers and print in reverse
	for(int i = v.size()-1; i >= 0; i--)
		cout << i << ": " << v[i] << endl;

	return 0;
} ///:~
