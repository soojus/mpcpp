#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



class Container
{
    int size;

public:
    Container() { this->size = 10; }
    void fill()
    {
        this->size = 10;
    }
    void consume()
    {
        this->size--;
    }
    int getSize()
    {
        return this->size;
    }
};
class CoffeeVendingMachine
{
    Container tong[3];
    void fill()
    {
        tong[0].fill();
        tong[1].fill();
        tong[2].fill();
        
    }
    void selectEspresso()
    {
        tong[0].consume();
        tong[1].consume();
        if(tong[0].getSize()<1 || tong[1].getSize()<1) {
                cout << "재료가 부족합니다 재료를 충전합니다."<<endl;
                fill();
            }
        else cout << "에스프레소를 드세요." << endl;
    }
    void selectAmericano()
    {
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
                if(tong[0].getSize()<1 || tong[1].getSize()<2) {
                cout << "재료가 부족합니다 재료를 충전합니다."<<endl;
                fill();
            }
        else cout << "아메리카노를 드세요." << endl;
    }
    void selectCafeLatte()
    {
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
        tong[2].consume();
        if(tong[0].getSize()<1 || tong[1].getSize()<2 || tong[2].getSize()<1) {
                cout << "재료가 부족합니다 재료를 충전합니다."<<endl;
                fill();
            }
        else cout << "카페라떼를 드세요." << endl;
    }
    void show()
    {
        cout << "커피 : " << tong[0].getSize() << "물 : " << tong[1].getSize() << "설탕 : " << tong[2].getSize() << endl;
    }

public:
    void run()
    {
        cout << "커피자판기를 가동합니다." << endl;
        int select = 0;

        while (true)
        {
            cout << " (1.에스프레소 2.아메리카노 3.카페라떼 4.잔량보기 총 5.채우기)" << endl;
            cout << "메뉴를 선택하세요 : ";
            cin >> select;
            if (select == 1)
            {
                selectEspresso();
            }
            else if (select == 2)
            {
                selectAmericano();
                /* code */
            }
            else if (select == 3)
            {
                selectCafeLatte();
                /* code */
            }
            else if (select == 4)
            {
                show();
            }
            else if (select == 5)
            {
                fill();
            }
            else break;

            
        }
    }
};

int main()
{
    CoffeeVendingMachine machine;
    machine.run();

    return 0;
}