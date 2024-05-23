#include <iostream>
#include <string>
#include <algorithm>    // reverse를 사용하기 위해 추가
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다)" << endl;

    while(1)
    {
        cout << ">>";
        getline(cin, str, '\n');
        if(str == "exit")
        {
            break;
        }
        else
        {
            reverse(str.begin(), str.end());
            cout << str << endl;
        }
    }
    return 0;
}