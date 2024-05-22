#include <iostream>
#include <string>
using namespace std;

class Account{
private:
    string name;
    int id;
    int balance;
public:
    Account();
    ~Account();
    Account(string name, int id, int balance);
    string getOwner();
    void deposit(int amount);
    int withdraw(int amount);
    int inquiry();
};

Account::Account(){
    name = "";
    id = 0;
    balance = 0;
}

Account::~Account(){
}

Account::Account(string name, int id, int balance){
    this->name = name;
    this->id = id;
    this->balance = balance;
}

string Account::getOwner(){
    return name;
}

void Account::deposit(int amount){
    balance += amount;
}

int Account::withdraw(int amount){
    balance -= amount;
    return amount;
}

int Account::inquiry(){
    return balance;
}

int main(int argc, char const *argv[])
{
    Account a("Kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    return 0;
}