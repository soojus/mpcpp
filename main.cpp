#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    string *address = new string("www.google.com");
    string *paddress = address;

    char text[] = "Hello World!";
    string *ptext = new string(text);

    string *p = new string("Hello World");
    cout << *p << endl;

    cout << p->append("!").insert(5, "daewon").replace(0, 5, "Hola ").size();
    cout << *p << endl;
    
    cout << p->compare("Hello World!") << endl;


    delete paddress;
    delete ptext;
    delete p;

    return 0;
}
