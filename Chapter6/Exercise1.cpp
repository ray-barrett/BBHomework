#include <iostream>

class Simple {
	public:
		Simple();
};

Simple::Simple(){
	std::cout << "An instance of Simple has just been initialised." << std::endl;
}


int main(){
	Simple s;

	return 0;
}
