#include <iostream>

// THis method of passing the reference makes the program much more readable. 
char& func(char& c)
{
	c = 'a';
	return c;
}

int main()
{
	char a = 'A';
	std::cout << a << std::endl;
	char& b = func(a);
	std::cout << b << std::endl;

	return 0;
}