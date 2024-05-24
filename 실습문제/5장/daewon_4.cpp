#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main(int argc, char const *argv[])
{
    int a, b, big = 0;
    cout << "2개의 수를 띄어서 입력하세요>> ";
    cin >> a >> b;
    if(bigger(a, b, big)) {
        cout << "두 수는 같습니다." << endl;
    } else {
        cout << big << "가 더 큰 수입니다." << endl;
    }

    return 0;
}

bool bigger(int a, int b, int& big)
{
    if (a == b) {
        return true;
    }
    else
    {
        if (a > b) {
            big = a;
        }
        else {
            big = b;
        }
        return false;
    }
}