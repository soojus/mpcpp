#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string coffee = "";
    int num = 0;
    int total = 0;

    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
    while(total < 20000)
    {
        cout << "주문>> ";

        cin >> coffee >> num;

        if(coffee == "에스프레소")
        {
            cout << num * 2000 << "원입니다. 맛있게 드세요" << endl;
            total += num * 2000;
        }
        else if(coffee == "아메리카노")
        {
            cout << num * 2300 << "원입니다. 맛있게 드세요" << endl;
            total += num * 2300;
        }
        else if(coffee == "카푸치노")
        {
            cout << num * 2500 << "원입니다. 맛있게 드세요" << endl;
            total += num * 2500;
        }
    }

    cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;

    return 0;
}