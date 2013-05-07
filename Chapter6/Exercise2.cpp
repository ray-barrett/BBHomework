#include <iostream>

class Simple {
	public:
		Simple();
		~Simple();
};

Simple::Simple(){
	std::cout << "An instance of Simple has just been initialised." << std::endl;
}

Simple::~Simple(){
	std::cout << "An instance of Simple was just destroyed." << std::endl;
}


int main(){
	Simple s;

	return 0;
}

