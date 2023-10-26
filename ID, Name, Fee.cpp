#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    float fee;

public:
    void get() {
        cout << "Enter id, name, fee: ";
        cin >> id >> name >> fee;
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Fee = " << fee << endl;
    }
};

int main() {
    Student s;
    s.get();
    return 0;
}
