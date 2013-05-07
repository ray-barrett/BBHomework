#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Text{
	string str;

	public:
		Text();
		Text(string);
		~Text();
		string contents();
};

Text::Text(){
	// Set default constructor to empty string
	str = "";
}

Text::Text(string filename){
	// Need to pass c style string into ifstream
	ifstream in(filename.c_str());
	string line;
	// While lines in file, append next line.
	while(getline(in, line))
		str += line + '\n';
}

Text::~Text(){
}

string Text::contents(){
	return str;
}

int main(){
	Text t("Exercise1.cpp");

	cout << t.contents() << endl;
	return 0;
}
