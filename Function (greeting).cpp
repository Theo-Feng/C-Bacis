#include <iostream>

using namespace std;

void greeting(string name, int age){
    cout << "Sup " << name <<". " << "You are "<< age <<". " << endl;
}


int main()
{
    greeting("Theo", 20);
    greeting("Andrew", 20);
    greeting("James", 21);
    
    return 0;
}
