#include <iostream>

using namespace std;

double cube_calculator(double number){
    double result = number * number * number;
    return result;
    
}

int main()
{
    double input;
    
    cout << "Please enter the number to be cubed: "<< endl;
    cin >> input;
    
    double answer = cube_calculator(input);
    cout << answer;
    
    return 0;
}
