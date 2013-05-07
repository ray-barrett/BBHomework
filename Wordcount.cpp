//: C02E3:Wordcount.cpp
// Copy an entire file into a vector of string
// Count the number of whitespace-separated words.

// Assumption: A "word" is one or more non-whitespace characters

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    ifstream in("Wordcount.cpp");
    string word;
    while(in >> word)
        v.push_back(word);
	//for(int i = 0; i < v.size(); i++)
	//	cout << v[i] << endl;
	cout << v.size() << endl;

    return 0;
} ///:~
