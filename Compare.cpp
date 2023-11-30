
#include <iostream>

using namespace std;

int getMax(int num1, int num2){
    int result;
    
    if(num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    
    return result;
    
}

int main ()
{
    int a;
    int b;
    
    cout << "Please enter the first number: " << endl;
    cin >> a;
    
    cout << "Please enter the second number: " << endl;
    cin >> b;
    
    cout << "The bigger number among the two is: "<<getMax(a,b);
    
    return 0;
}
