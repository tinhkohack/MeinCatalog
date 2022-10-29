#include <iostream>
using namespace std;
int main()
{
    float val1,val2,sum,dif,prod,division;
    cout << "Input value 1: ";
    cin >> val1;
    cout << "Input value 2 (value # 0): ";
    cin >> val2;
    sum = val1 + val2;
    dif = val1 - val2;
    prod = val1 * val2;
    division = val1 / val2;
    cout << "The sum of two numbers is: " << sum << endl;
    cout << "The difference between two numbers is: " << dif << endl;
    cout << "The product of two numbers is: " << prod << endl;
    cout << "The division of two numbers is: " << division << endl;    
}