#include<fstream>
#include<iostream>

int main()
{
	std::ifstream inputFile("input.txt", std::ios::in);
      	std::string number;
	int readingsCount[101] = {};
	while(inputFile.good())
	{
		char c;
		int i;
	       inputFile >> i; //	= inputFile.get();
	       std::cout << i << std::endl;
		
	       if(c == ' ')
		{
			if(number.empty())
				continue;

			std::cout << number << " " <<c<<std::endl;;
			short reading = std::stoi(number);
			if(reading >= 0 && reading <= 100 )
				++(readingsCount[reading]);
			number.clear();
		}
		else
		{
			number += c;
		}
	}	

	for(int i = 0; i< 101; ++i)
	{
		if(readingsCount[i] > 0)
			std::cout << i <<" : " << readingsCount[i] << "\n";
	}
	return 0;
}
