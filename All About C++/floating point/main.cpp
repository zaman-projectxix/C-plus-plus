#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    cout <<"Please enter a floating-point value ";
    int n;
    cin >> n;
    cout << "n == " << n
            << "\nn+1 == " << n+1
            << "\nthree times n == " << n*3
            << "\ntwice n == " << n+n
            << "\nn squared == " << n*n
            << "\nhalf of n == " << n/2
            << "\nsquare root of n == " << sqrt(n)
            << endl;
}
