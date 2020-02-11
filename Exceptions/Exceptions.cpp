// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MyException : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "Something really bad happened";
    }
};
class MightGoWrong
{
public:
    MightGoWrong()
    {
        char *c = new char[9999999];
        delete[] c;
    }
};

void mightGoWrong() {
    bool error1 = false;
    bool error2 = true;

    if (error1) {
        throw "Something is wrong, officer";
    }

    if (error2) {
        throw string("Something else went wrong");
    }
}

void usesMightGoWrong() {
    mightGoWrong();
}

class TestMyException
{
public:
    void goesWrong()
    {
        throw MyException();
    }
};
void testGoWrong()
{
    bool check = true;

    if (check)
    {
        throw 1.2l;
    }
}

int main()
{
    try {
        testGoWrong();
    }
    catch (int e) {
        cout << "Error code:" << e<<endl;
    }
    catch (char const* e) {
        cout << "Error message:" << e << endl;
    }
    catch (string e) {
        cout << "String error message:" << e << endl;
    }
    catch (float e) {
        cout << "Float error message: " << e << endl;
    }
    catch (double e) {
        cout << "Double error message: " << e << endl;
    }
    catch (long double e) {
        cout << "Long double error message: " << e << endl;
    }

    try {
        MightGoWrong test;
    }
    catch (bad_alloc e) {
        cout << "Standard error: " << e.what() << endl;
    }

    try {
        TestMyException test;
        test.goesWrong();
    }
    catch (MyException & e)
    {
        cout << "Custom error: " << e.what() << endl;
    }
    cout << "Still running"<< endl;
    return 0;
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
