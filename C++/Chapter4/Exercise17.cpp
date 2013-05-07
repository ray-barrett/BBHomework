#include<iostream>
#include<cstring>

#define P(ex) std::cout << #ex << ": " << ex << std::endl;

int main(){
	// Allocate memory
	int* i = new int[10];
	long* l = new long;
	char* c = new char[100];
	float* f = new float[100];

	std::cout << "Variable Addresses:" << std::endl;
	P(&i);
	P(&l);
	P(&c);
	P(&f);

	delete i;
	delete l;
	delete c;
	delete f;

	return 0;
}
