#include <iostream>
using namespace std;
int main()
{
    int pennie,nickel,dime,quarter,half_dol,one_dol,value;
    cout << "How many pennies do you have? ";
    cin >> pennie;
    cout << "How many nickels do you have? ";
    cin >> nickel;
    cout << "How many dimes do you have? ";
    cin >> dime;
    cout << "How many quarters do you have? ";
    cin >> quarter;
    cout << "How many half-dollar coins do you have? ";
    cin >> half_dol;
    cout << "How many one-dollar coins do you have? ";
    cin >> one_dol;
    value = pennie + nickel*5 + dime*10 + quarter*25 + half_dol*50 + one_dol*100;
    cout << "The value of all your coins is " << value << " cents" << endl;
}