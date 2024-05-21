#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"주소를 입력하세요: ";
    char address[100];
    cin.getline(address,sizeof(address),'\n');
    cout << "주소는 " << address << "입니다\n";
    return 0;
}
