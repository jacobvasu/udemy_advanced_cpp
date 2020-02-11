// STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

void vectors()
{
    vector<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }
}

void vectors2d()
{
    vector< vector<int> > numbers(10, vector<int>(10, 0));

    int num = 8;
    int mul = 1;
    for (size_t row = 0; row < numbers.size(); row++)
    {
        for (size_t col = 0; col < numbers[row].size(); col++)
        {
            numbers[row][col] = num*mul;
            mul+=1;
        }
    }

    for (size_t row = 0; row < numbers.size(); row++)
    {
        for (size_t col = 0; col < numbers[row].size(); col++)
        {
            cout<<numbers[row][col]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    vectors2d();
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
