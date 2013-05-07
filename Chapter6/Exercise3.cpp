#include <iostream>

class Simple {
	int i;
	public:
		Simple(int);
		~Simple();
};

Simple::Simple(int a){
	i = a;
	std::cout << "An instance of Simple has just been initialised to " << i << "." << std::endl;
}

Simple::~Simple(){
	std::cout << "Simple with value of " << i << " was just destroyed." << std::endl;
}


int main(){
	Simple s(5);

	return 0;
}

