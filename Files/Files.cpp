// Files.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

void writeFile()
{
    ofstream outFile;
    string fileLoc = "positive.txt";

    outFile.open(fileLoc);

    if (outFile.is_open())
    {
        int repeat = 10;

        for (int line = 1; line <= repeat; line++)
        {
            outFile << line << ". Life is Great always!" << endl;
        }
        outFile.close();
    }
    else {
        cout << "File could not be opened!";
    }
}

void readFile()
{
    ifstream readFile;
    string fileLoc= "positive.txt";

    readFile.open(fileLoc);

    if (readFile.is_open())
    {
        string line;
        while (readFile)
        {
            getline(readFile, line);
            cout << line << endl;
        }
        readFile.close();
    }
}

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main()
{
    cout << sizeof(Person) << endl;
   // writeFile();
   //readFile();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
