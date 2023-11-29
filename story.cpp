#include <iostream>

using namespace std;

int main()
{
    string color, noun, name;
    
    cout << "Plsease enter a color:";
    getline(cin, color);
    
    cout << "Plsease enter a pluralnoun:";
    getline(cin, noun);
    
    cout << "Plsease enter a name:";
    getline(cin, name);
    
    cout << name << "'s favourate color is the " << color << " of " << noun <<".";
    
}
