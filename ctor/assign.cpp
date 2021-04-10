#include<iostream>

using namespace std;
class A
{
	public:
		A(){x = 5;}
		A(int i ){ x = i;}
		const A& operator= (const A& a)
		{
			x = a.x;
			return a;
		}

	int x;
};

int main()
{
	A a1(20), a2(30) , a3(50);
	a3 = a1 = a2;
	cout << a1.x << " " << a2.x << " "<< a3.x <<endl;
return 0;
}
