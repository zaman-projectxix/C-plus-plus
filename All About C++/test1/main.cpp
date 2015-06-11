#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the name of the person you want to write to: \n";
    string first_name;
    string friend_name;
    int age;
    cin >> first_name;
    cout << "Enter your friend's age: \n";
    cin >> age;
    char friend_sex = 0;
    cout << "Enter another of your friend name: \n";
    cin >> friend_name;
    cout << "Enter gender of your friend: \n";
    cin >> friend_sex;
    cout << "Dear " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you.\n";

    cout << "Have you seen " << friend_name << " lately?\n";

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";

    cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age <= 7)
        cout << "Are you kidding!\n";
    if (age <= 12)
        cout << "Next year you will be " << age+1 << ".\n";
    if (age == 17)
        cout << "Next year you will be able to vote\n";
    if (age >= 70)
        cout << "I hope you are enjoying retirement.\n";

}
