
#include <iostream>
#include "lib/utils.h"

int main()
{

	for(int i = 0; i< 100 ; ++i)
		if(MyUtils::IsPrime(i))
		std::cout << i  << std::endl;
	return 0;
}
