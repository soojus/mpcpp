#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string password;
    string check;

    cout << "새 암호를 입력하세요>>";
    cin >> password;

    cout << "새 암호를 다시 한 번 입력하세요>>";
    cin >> check;

    if(password == check)
    {
        cout << "같습니다." << endl;
    }
    else
    {
        cout << "같지 않습니다." << endl;
    }

    return 1;
}