#include <iostream>
using namespace std;
int main()
{
    double celsius,fahrenheit;
    cout << "Input the temperature in Celsius scale: ";
    cin >> celsius;
    fahrenheit = celsius*1.8 + 32;
    cout << "The temperature in Fahrenheit scale: " << fahrenheit;
}