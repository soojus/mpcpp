#include <iostream>
#include <string>
using namespace std;

class Person{
    int id;
    double weight;
    string name;
    public:
    Person() : id(1), weight(20.5), name("Grace") {}
    Person(int id, const string& name) : id(id), weight(20.5), name(name) {}
    Person(int id, double weight, const string& name) : id(id), weight(weight), name(name) {}
    ~Person(){}
    void show(){
        cout<< id << ' '<< weight << ' '<< name<< endl;
    }
};

int main(){
    Person grace, ashley(2,"Ashley"), helen(3, 32.5, "Helen");
    grace.show();
    ashley.show();
    helen.show();
    return 0;
}