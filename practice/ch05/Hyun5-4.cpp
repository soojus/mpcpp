#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int &big)
{
    if(a==b) return true;
    else{
        if(a>b) big = a;
        else big = b;
        return false;
    }
};

int main()
{
    int a , b =0;
    cout<< "두 수를 입력하여라>>";
    cin >> a >> b;
    int big = 0;
    bool returnvalue;
    if(returnvalue = bigger(a,b,big)) cout << "큰 수 = "<<big;
    else cout<< "리턴값 = "<<returnvalue;
    return 0;
}