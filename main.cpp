#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    
    cout<<song + "를 부른 가수는";
    cout<<"(힌트: 첫글자는)"<<elvis[0] <<  ")";
    //cin.getline(singer, 20);
    getline(cin, singer);
    if(singer==elvis)
        cout<<"Elvis!";
    else
        cout<<"Elvis 가 아닙니다. !";

    return 0;
}
