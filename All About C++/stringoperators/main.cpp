#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your First and Second names:\n";
    string first;
    string second;
    cin >> first >> second ;
    string name = first + ' ' + second;
    cout << "hello, " << name << '\n';
}
