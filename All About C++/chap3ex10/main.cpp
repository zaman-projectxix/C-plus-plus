#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string operation;
    double val1;
    double val2;
    cout << "Please enter a valid operation followed by two value: \n";
    cin >> operation >> val1 >> val2;
    if (operation == "+")
        cout << "The value is " << val1+val2 << endl;
    else if (operation == "-")
        cout << "The value is" << val1-val2 << endl;
    else if (operation == "*")
        cout << "The value is " << val1*val2 << endl;
    else if (operation == "/")
        cout << "The value is " << val1/val2 << endl;
    else
        cout << "Unknown operation!\n";
        return 0;


}
