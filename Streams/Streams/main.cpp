#include <iostream>
#include <fstream>

using namespace std;

void SaveFile();

const int bufferSize = 128;

void main()
{
	SaveFile();

	cin.get();
}

int GetTextSize(char text[])
{
	int size{};

	for (int i = 0; i < bufferSize; i++)
	{
		if (text[i] != '\0')
		{
			size++;
		}
	}
	return size;
}

void SaveFile()
{
	char text1[bufferSize]{};
	char text2[bufferSize]{};
	int size1{};
	int size2{};

	cout << "Enter the first text: " << endl;
	cin.getline(text1, bufferSize);
	size1 = GetTextSize(text1);
	
	cout << "Enter the second text: " << endl;
	cin.getline(text2, bufferSize);
	size2 = GetTextSize(text2);


	ofstream longOutputStream = ofstream();
	longOutputStream.open("long_text.txt");

	ofstream shortOutputStream = ofstream();
	shortOutputStream.open("short_text.txt");

	if (size1 > size2)
	{
		longOutputStream << text1 << endl;
		shortOutputStream << text2 << endl;
	}
	else
	{
		longOutputStream << text2;
		shortOutputStream << text1;
	}

	longOutputStream.close();
	shortOutputStream.close();
}