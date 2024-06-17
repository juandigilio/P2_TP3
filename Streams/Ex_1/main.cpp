#include <iostream>
#include <fstream>

using namespace std;

string ReadFile(const char dir[]);

const int bufferSize = 128;

void main()
{
	string longText{};
	string shortText{};

	longText = ReadFile("../Streams/long_text.txt");
	shortText = ReadFile("../Streams/short_text.txt");

	cout << "Texto largo: " << endl;
	cout << longText;
	cout << "Texto corto: " << endl;
	cout << shortText;
}

string ReadFile(const char dir[])
{
	string text;

	ifstream inputStream = ifstream();
	inputStream.open(dir);

	while (!inputStream.eof())
	{
		char tempText[bufferSize];

		inputStream.getline(tempText, bufferSize);

		text += tempText;
		text += "\n";
	}

	inputStream.close();

	return text;
}
