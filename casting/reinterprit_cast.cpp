
#include<iostream>

using namespace std;

class Sample1
{
	public:
		int abc;
		Sample1():abc(20){}
};

class Sample2
{
	public:
		int abc;
		Sample2():abc(30){}
};

int main()
{
	Sample1 s1;
	Sample2 s2;

	Sample1 *p = &s1;
	cout << p->abc<< endl;
	Sample2 *q = reinterpret_cast<Sample2*>(p);

	cout << q->abc << endl;
	return 0;
}
