#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void printSourceCode();

void main() 
{
    printSourceCode();

    cin.get();
}

void printSourceCode() {
    
    ifstream sourceFile(__FILE__);
    
    string line;
    while (getline(sourceFile, line)) 
    {
        cout << line << endl;
    }
        
    sourceFile.close(); 
}