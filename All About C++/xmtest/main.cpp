#include <iostream>

using namespace std;

int main()
{
    double a, b;
    const string small = "The smaller value is: ",
        large = " and the larger value is: ";

    while (cin >> a >> b) {
        if (a == b)
            cout << "The numbers are equal\n";
        else if (a < b)
            cout << small << a << large << b << "\n";
        else
            cout << small << b << large << a << "\n";
    }
    // keep_window_open();
    return 0;
}
