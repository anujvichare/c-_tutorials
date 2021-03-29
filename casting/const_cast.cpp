#include<iostream>
using namespace std;
class sample
{
	public:
		sample()
		{
			member = 25;
		}
		void func() const
		{
			const_cast<sample*>(this)->member  = member + 100;
			cout << "class data : " << member;
		}
	private:
	int member;	

};


int main()
{
	int var = 10;
	const int* p = &var;
	const int& rvar = var;
	 ++const_cast<int*>(p)[0];
	cout << var;

	++const_cast<int&>(rvar);
	cout<< "  rvar:" << var;
	
	sample s;
	s.func();

	return 0;

}
