#include<iostream>

// Compiler wont compile with:
#define F (x) (x + 1)

//#define F(x) (x+1) 

int main(){
	std::cout << F (2) << std::endl;

	return 0;
}
