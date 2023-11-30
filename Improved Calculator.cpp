#include "iostream"

using namespace std;

int main(){
    
    double num1;
    double num2;
    char op;
    double result;
    
    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the operator: ";
    cin >> op;
    cout << "Please enter the second number: ";
    cin >> num2;
    
    if(op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*'){
        result = num1 * num2;
    } else{
        result = num1 / num2;
    }
    
    cout << "The answer is: " << result;
    
    return 0;
    
}
