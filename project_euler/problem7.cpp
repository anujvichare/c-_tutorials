/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10001st prime number?
*/

#include<iostream>
#include"lib/utils.h"

int64_t GetIthPrimeNo(const int& index)
{
	uint64_t no = 1;
	int count = 0;

	while(count < index)
	{
		++no;
		if(MyUtils::IsPrime(no))
			count++;
	}
	return no;
}

int main()
{
	std::cout << "10001th prime no: "<< GetIthPrimeNo(10001)<< std::endl;
	return  0;
}
