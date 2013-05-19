#include <iostream>

int& func(int& a)
{
	a++;

	return a;
}

int main()
{
	int b = 5;
	
	int& c = func(b);
	
	return 0;
}