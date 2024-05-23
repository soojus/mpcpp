#include <iostream>
#include <string>
using namespace std;

string menu(int choice);

int main(int argc, char const *argv[])
{
    int choice = 0;
    int count = 0;

    cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

    while(1)
    {
        while (1)
        {
            cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
            cin >> choice;

            if(choice == 4)
            {
                cout << "오늘 영업은 끝났습니다." << endl;
                return 0;
            }

            if(menu(choice) != "")
            {
                break;
            }
            else
            {
                cout << "다시 주문하세요!!" << endl;
            }
        }
        
        cout << "몇인분?";
        cin >> count;

        cout << menu(choice) << " " << count << "인분 나왔습니다" << endl;
    }

    return 0;
}

string menu(int choice)
{
    if(choice == 1) return "짬뽕";
    else if(choice == 2) return "짜장";
    else if(choice == 3) return "군만두";
    else return "";
}