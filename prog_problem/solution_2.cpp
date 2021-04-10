#include<array>
#include<iostream>
#include<fstream>

using namespace std;

static const int ARRAY_SIZE = 101;

class Reader
{
	public:
		Reader(const string& fileName);
		~Reader();
		void ReadDataAndProcess(array<pair<int,int>, ARRAY_SIZE>& array);
	private:
		ifstream m_inputFile;

};

class Writer
{
	public:
		Writer(const string& fileName);
		void WriteDataToFile(array<pair<int, int>, ARRAY_SIZE>& array);
		~Writer();
	private:
		ofstream m_outputFile;
};

Reader::Reader(const string& fileName)
{
	m_inputFile.open(fileName.c_str(), ios::in);
}
Reader::~Reader()
{
	if(m_inputFile.is_open())
		m_inputFile.close();
}
void Reader::ReadDataAndProcess(array<pair<int, int>, ARRAY_SIZE>& array)
{
	while(m_inputFile.good())
	{
		int reading;
		m_inputFile >> reading;
	       	if(0 <= reading && reading <= 100)
	       		++array[reading].first; 	       
	}
}


Writer::Writer(const string& fileName)
{
	m_outputFile.open(fileName.c_str(), ios::out | ios::trunc);
}
Writer::~Writer()
{
	if(m_outputFile.is_open())
		m_outputFile.close();
}

void Writer::WriteDataToFile(array<pair<int, int>, ARRAY_SIZE>& array)
{
	for(int i =0 ;i < array.size(); ++i)
	{
		for(int j = 0 ; j < array[i].first; ++j)
		{
			if(!array[i].first)
				break;

			m_outputFile << i << " ";
		}
	}	
}



int main(int argc, char* argv[])
{
	if(argc < 3)
		return 0;
	static std::array<std::pair<int,int>, ARRAY_SIZE> ReadingCounts;

	Reader r(argv[1]);
	r.ReadDataAndProcess(ReadingCounts);

	Writer w(argv[2]);
	w.WriteDataToFile(ReadingCounts);

	return 0;
}
