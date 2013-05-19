#include <iostream>

class p
{
public:
	p()
	{
		std::cout << "Constructing p\n";
	}
	~p()
	{
		std::cout << "Destroying p\n";
	}
};

class q : public p
{
public:
	q()
	{
		std::cout << "Constructing q\n";
	}
	~q()
	{
		std::cout << "Destroying q\n";
	}
};

class r : public q
{
public:
	r()
	{
		std::cout << "Constructing r\n";
	}
	~r()
	{
		std::cout << "Destroying r\n";
	}	
};

int main()
{
	/*
	Running this program produces:
		Constructing p
		Constructing q
		Constructing r
		Destroying r
		Destroying q
		Destroying p

	This ordering is due to the inherited opject being created before the inheritor,
	but the inheriting class needs to be deleted before the inhereted one.
	*/

	r a;

	return 0;
}