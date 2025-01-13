#include <iostream>
using namespace std;

int main() 
{
    int num1, num2, sum, difference;

    cout << "isi 2 angka: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    difference = num1 - num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;

    return 0;
}
