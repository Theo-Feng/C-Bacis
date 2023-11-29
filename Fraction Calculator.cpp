

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number1, number2;
    
    cout << "This is a calculator that calculate the value of a Fraction" <<endl;
    
    cout << "Please enter the Numerator:";
    cin >> number1;
    
    cout << "Please enter the Denominator:";
    cin >> number2;
    
    cout << number1 / number2;
    
    return 0;
}
