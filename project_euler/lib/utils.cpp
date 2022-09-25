
#include<math.h>
namespace MyUtils
{
	bool IsPrime(const int64_t& number)
	{
		if(number < 2)
			return false;

		int factor = 2;
		while(factor <= sqrt(number))
		{
			if((number%factor) == 0)
				return false;
			else
				++factor;
		}
		return true;
	}
}
