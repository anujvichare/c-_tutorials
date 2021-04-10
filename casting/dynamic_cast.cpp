#include<iostream>
using namespace std;

class Base
{
	public:
	int var;

	virtual  void func(){}
};

class Derived : public Base
{
	public:
	int vard;
};

class Derived2 : public Base
{

};

class Other
{
	public:
	int var;
};

int main()
{
	Other *o=  nullptr;
	Base *b = new Derived();

	Derived *d = dynamic_cast<Derived*>(b);
	if(d)
		cout<< "casting worked"<<endl;
	else
		cout << "castng failed"<<endl;

	Other *q1 = dynamic_cast<Other*>(b);
	if(q1) cout <<"chal gaya..."<< endl;
	else cout << "nai chala.."<<endl;
	
	Derived2 *d2 =  dynamic_cast<Derived2*>(b);
	if(d2) cout <<"chal gaya..."<< endl;
        else cout << "nai chala.."<<endl;
 	
	return 0;
}
