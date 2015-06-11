#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
   string previous = " ";
   string current;
   while (cin>>current){
    if(previous == current)
        cout << "repeated word:" << current << '\n';
    previous = current;

   }
}
