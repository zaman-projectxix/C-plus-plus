#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main () {
    string first_name = "";
    cout << "Enter the name of the person you want to write to\n";
    cin >> first_name;

    string another_name;
    cout << "Enter the name of another friend\n";
    cin >> another_name;
    char friend_sex = 0;
    cout << "Enter the sex of the friend\n";
    cin >> friend_sex;

    int age;
    cout << "Enter the age of the recipient\n";
    cin >> age;

    cout << "Dear " << first_name << ',' << endl;
    cout << "    How are you?  I am fine.  I miss you. Are you continuing your coding yet?\n";
    cout << "\nHave you seen " << another_name << " recently?\n";
    if (friend_sex == 'm')
        cout << "If you see " << another_name
            << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << another_name
            << " please ask her to call me.\n";

    cout << "\nI hear you just had a birthday recently and are "
        << age << " years old\n";
    if (age <= 0)
        cout << "You're kidding!\n";
    if (age >= 110)
        cout << "You're kidding!\n";
    if (age <= 12)
        cout << "Next year you will be " << age+1 << endl;
    if (age == 17)
        cout << "Next year you will be able to vote.\n";
    if (age >= 70)
        cout << "I hope you are enjoying your retirement.\n";

    cout << "Yours sincerely, Shawkat.\n";

    // keep_window_open();
    return 0;
}
