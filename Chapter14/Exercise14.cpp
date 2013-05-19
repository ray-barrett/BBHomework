#include <iostream>
#include <string>

#define print(x) std::cout << x << std::endl;

class Traveler
{
public:
	std::string str;

	Traveler(std::string s) : str(s){}
	Traveler(const Traveler& other) : str(other.str){}
	~Traveler(){}

	Traveler& operator=(const Traveler& other)
	{
		print("here");

		if (this == &other)
			return *this;
		str = other.str;
		return *this;
	}
};

class Pager
{
public:
	std::string str;

	Pager(std::string s) : str(s){}
	Pager(const Pager& other) : str(other.str){}
	~Pager(){}

	Pager& operator=(const Pager& other)
	{
		print("here");
		if (this == &other)
			return *this;
		str = other.str;
		return *this;
	}
};

class BusinessTraveller : public Traveler
{
public:
	Pager p = Pager("");

	BusinessTraveller(std::string s = "Ray") : Traveler(s)
	{
		p = Pager(s);
	}
	~BusinessTraveller(){}

	BusinessTraveller& operator=(const BusinessTraveller& other)
	{
		if (this == &other)
			return *this;
		
		p = other.p;
		// Assign to traveler somehow
		Traveler = other.Traveler;

		return *this;	
	}
};

int main(int argc, char const *argv[])
{
	BusinessTraveller b("Ryan");
	BusinessTraveller c;

	b = b;
	return 0;
}