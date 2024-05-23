#include <iostream>
using namespace std;

class Container{
private:
    int size;
public:
    Container() {size = 10; }
    void fill() { size = 10; };
    void consum() { size -= 1; };
    int getSize() { return size; };
};

class CoffeeVendingMachine{
private:
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffee();
    void show();
public:
    void run();
};

void CoffeeVendingMachine::fill()
{
    tong[0].fill();
    tong[1].fill();
    tong[2].fill();
    show();
}

void CoffeeVendingMachine::selectEspresso()
{
    if(tong[0].getSize() >= 1 && tong[1].getSize() >= 1)
    {
        cout << "에스프레소 드세요" << endl;
        tong[0].consum();
        tong[1].consum();
    }
    else
    {
        cout << "원료가 부족합니다." << endl;
    }
}

void CoffeeVendingMachine::selectAmericano()
{
    if(tong[0].getSize() >= 1 && tong[1].getSize() >= 2)
    {
        cout << "아메리카노 드세요" << endl;
        tong[0].consum();
        tong[1].consum();
        tong[1].consum();
    }
    else
    {
        cout << "원료가 부족합니다." << endl;
    }
}

void CoffeeVendingMachine::selectSugarCoffee()
{
    if(tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1)
    {
        cout << "설탕커피 드세요" << endl;
        tong[0].consum();
        tong[1].consum();
        tong[1].consum();
        tong[2].consum();
    }
    else
    {
        cout << "원료가 부족합니다." << endl;
    }
}

void CoffeeVendingMachine::show()
{
    cout << "커피 " << tong[0].getSize() << ", ";
    cout << "물 " << tong[1].getSize() << ", ";
    cout << "설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run()
{
    int choice = 0;
    while(1)
    {
        cout << "1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기>> ";
        cin >> choice;
        if(choice == 1)
        {
            selectEspresso();
        }
        else if(choice == 2)
        {
            selectAmericano();
        }
        else if(choice == 3)
        {
            selectSugarCoffee();
        }
        else if(choice == 4)
        {
            show();
        }
        else if(choice == 5)
        {
            fill();
        }
    }
}

int main(int argc, char const *argv[])
{
    CoffeeVendingMachine cvm;
    cout << "***** 커피자판기를 작동합니다. *****" << endl;
    while(1)
    {
        cvm.run();
    }

    return 0;
}