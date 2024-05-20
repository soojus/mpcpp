#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "너비를 입력하세요: ";
    int width;
    cin >> width;

    cout << "높이를 입력하세요: ";
    int height;
    cin >> height;

    cout << "면적: " << width * height << endl;
    return 0;
}
