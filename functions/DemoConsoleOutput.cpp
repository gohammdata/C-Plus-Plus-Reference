#include <iostream>
using namespace std;

//  Declaring the Demo Output function
int DemoConsoleOutput();

int main()
{
    //  Invoke the function
    DemoConsoleOutput();
    return  0;
}

//  Implement the previously declared function
int DemoConsoleOutput()
{
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division of 25 / 5 = " << 25 / 5 << endl;
    cout << "Pi when appoximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;

    return  0;
}