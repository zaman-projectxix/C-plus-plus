#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your first name and age(followed by enter): \n";
    string first_name = "???";
    double age;
    cin >> first_name >> age;
    cout << "Hello, \n" << first_name << " you are " << age*12 << " month old!\n";
    return 0;
}
