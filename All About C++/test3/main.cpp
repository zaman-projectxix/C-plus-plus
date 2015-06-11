#include <iostream>

using namespace std;

int main()
{
    string text = "";
    cout << "Please type a digit as text\n";
    cin >> text;
    if (text == "")
        cout << "Stupid computer!\n";
    else if (text == "zero")
        cout << "The value of " << text << " is 0\n";
    else if (text == "one")
        cout << "The value of " << text << " is 1\n";
     else
            cout << "Not a number I know.\n";
}
