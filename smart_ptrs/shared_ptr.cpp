#include<iostream>
#include<memory>
#include<vector>

using namespace std;

class Test
{
	public:
	Test(){ cout << "default " << endl;}
	Test(int d):data(d){  cout << "para const .." << data << endl;}
	Test(const Test& t) { data = t.data; cout << "copy ctor.." << data << endl;}
	Test(Test&& t) { data = t.data; t.data = 0; cout << "move ctor .." << data<< endl;}
	~Test() {cout << "mai to chala.." << data <<endl;}
	int data;
};


int main()
{
	// assigning nrml ptr to shared
	/*Test *p = new Test(20);

	shared_ptr<Test> sp(p); // = opertor threw error;
	cout << "p : " << sp->data << "address "<<p << endl;

	
	shared_ptr<Test> sp1 = make_shared<Test>(30);
	cout << "sp1 : " << sp1->data;	

	sp = sp1;
	cout << sp.use_count() << "  " <<sp1.use_count() << endl; 
	
//	Test* newp = new Test(50);
//	cout << newp << " address p "<< p << " data "<<p->data << endl;
//	delete p; // double delete will lead to crash
*/
/*	cout << "================ " << endl;
	// shared pointer to an array
	shared_ptr<Test[10]> spa = make_shared<Test[10]>();
	for(int i = 0; i< 10; ++i)
	{
		spa[i].data = i;
	//	spa++;
	}

	for(int i = 0; i< 10; ++i)
	{

		cout << spa[i].data<< endl;
	}

*/
	cout << "==== using vector ====" << endl;
	 shared_ptr<std::vector<Test>> spv = make_shared<std::vector<Test>>();
	 spv->reserve(20);
        for(int i = 0; i< 10; ++i)
        {
               spv->emplace_back(i);
	       //spv->push_back(i);
	       cout << "looop  "<< i << endl;
        //      spa++;
        }

        for(int i = 0; i< 10; ++i)
        {

        //        cout << spv->at(i).data << endl;
        }



	return 0;
}
