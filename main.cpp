#include <iostream>

using namespace std;
<<<<<<< HEAD
int main(int argc, char const *argv[])
{
    cout<<"Hello World!!\n";
    cout<<"안녕하세요"<<std::endl;
    cout<<"반갑습니다."<<std::endl;
    cout<<"Hyun."<<std::endl;

    char address[100];
    cin.getline(address,100);
    cout<<address<<endl;
    
=======

int main(int argc, char const *argv[])
{
    cout << "너비를 입력하세요: ";
    int width;
    cin >> width;

    cout << "높이를 입력하세요: ";
    int height;
    cin >> height;

    cout << "면적: " << width * height << endl;
>>>>>>> 55b96dc98686d6dabba754ec7c4eefb61855983d
    return 0;
}
