#include <iostream>
#include <string>

using namespace std;

class  Circle {
private:
    int radius;
public:
    Circle(){}

    int getRadius(int radius){
        return this->radius;
    }
    double getArea() {
        return 3.14*this->radius*this->radius;
    }
};

int main(int argc, char const *argv[])
{
    // cout << "너비를 입력하세요: ";
    // int width;
    // cin >> width;
    // cout << "높이를 입력하세요: ";
    // int height;
    // cin >> height;
    // cout << "면적: " << width * height << endl;

    // cout << "주소를 입력하세요. : ";
    // char address[100];
    // cin.getline(address, 100,'\n');
    // cout << "주소: " << address << endl;

    // string song("Falling in love with you");
    // string elvis("Elvis Presley");
    // string singer;
    // cout<<song + "를 부른 가수는"<<endl;
    // cout<<"(힌트: 첫글자는)"<<elvis[0]<< ")";
    // cout << "singer: ";
    // getline(cin, singer);
    // if(singer == elvis)
    // {
    //     cout<<"Correct"<<endl;
    // }
    // else
    // {
    //     cout<<"Wrong"<<endl;
    // }
    // cout << "singer: " << singer << endl;



    return 0;
}
