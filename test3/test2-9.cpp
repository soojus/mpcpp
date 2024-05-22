#include <iostream>
using namespace std;

int main()
{
    cout << "이름은?";
    string name;
    getline(cin, name);
    
    cout << "주소는?";
    string address;
    getline(cin, address);

    cout << "나이는?";
    string age;
    getline(cin, age);

    cout << name << ", " << address << ", " << age << endl;

    return 0;
}