
#include<iostream>

using namespace std;

#define FUNC cout<<__func__<<endl;

class Sample
{
	public:
		char* heapData;

	Sample(): heapData(nullptr){ FUNC heapData = new char[10];}
	Sample(const Sample& ) { FUNC heapData = new char[10]}
       	//Sample()
	//
	~Sample(){delete[] heapData;}	


};

void print(Sample s)
{
 	FUNC	
}

int main()
{
	Sample s1;
	Sample s2 = s1;
	Sample s4;
	{
		Sample s3;
		s1 = s2;

		//print
		s4 = std::move(s3);
	}

	s4.something()
return 0;
}

