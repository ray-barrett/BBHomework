#include <iostream>

using namespace std;
class Counter{
	public:
		int count;

		Counter(int cnt=0)
		{
			count = cnt;
		}
		~Counter(){};
		// prefix:
		Counter& operator++();
		// postfix:
		Counter& operator++(int);
		ostream& operator<<(ostream&);
};

// Prefix;
Counter& Counter::operator++()
{
	std::cout << "Prefix: ++A\n";
	this->count++;
	return *this;
}

// Postfix;
Counter& Counter::operator++(int)
{
	std::cout << "Postfix: A++\n";
	Counter pre(this->count);
	this->count++;
	return pre;
}

ostream& operator<<(ostream& os, Counter& c)
{
	os << c.count;
	return os;
}

int main()
{
	Counter c = Counter();
	++c;
	cout << c << endl;
	c++;
	cout << c << endl;
	return 0;
}