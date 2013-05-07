#include<iostream>
/*
class Temp{
	int a,b,c;
	public:
		Temp(){};
		~Temp(){};
		void memfunc();
		void memfunc(int);
		void memfunc(int, int);
		void memfunc(int, int, int);
};

// Assuming the member functions are the same function overloaded.
void Temp::memfunc(){
	a = 0;
	b = 0;
	c = 0;
}

void Temp::memfunc(int x){
	a = x;
	b = 0;
	c = 0;
}

void Temp::memfunc(int x, int y){
	a = x;
	b = y;
	c = 0;
}

void Temp::memfunc(int x, int y, int z){
	a = x;
	b = y;
	c = z;
}
*/

class Temp{
	int a, b, c;
	public:
		Temp(){};
		~Temp(){};
		void memfunc(int, int, int);
};

void Temp::memfunc(int x = 0, int y = 0, int z = 0){
	a = x;
	b = y;
	c = z;
}


int main(){
	Temp t;

	t.memfunc();
	t.memfunc(5);
	t.memfunc(5,8);
	t.memfunc(5,8,11);

	std::cout << "There is no differene in the function calls.\nThe defaulted function can be called the same wats as the overloaded functions." << std::endl;

	return 0;
}
