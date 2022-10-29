#include <iostream>
using namespace std;
int main()
{
    int bit1,bit2,bit3,dec_value;
    cout << "Input the first (lowest) bit: ";
    cin >> bit1;
    cout << "Input the first second bit: ";
    cin >> bit2;
    cout << "Input the first third bit: ";
    cin >> bit3;
    dec_value = bit1+bit2*2+bit3*4;
    cout << "The decimal value of the given binary value is: " << dec_value << endl;
}