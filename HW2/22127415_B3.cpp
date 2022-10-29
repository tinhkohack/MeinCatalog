#include <iostream>
using namespace std;
int main()
{
    double kilometer, mile;
    cout << "Input the distance in kilometers: ";
    cin >> kilometer;
    mile = 0.621371192 * kilometer;
    cout << "The distance in miles: " << mile << endl;
}