#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char& find(char a[], char c, bool& success){
    string text(a);
    auto num = text.find(c);
    if(num != string::npos){
        success = true;
        return a[num];
    }
    return a[num];
};

int main()
{
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s,'M', b);
    if(b == false){
        cout<< "M을 발견할 수 없다"<<endl;
        return 0;
    }
    loc = 'm';
    cout << s << endl;
    return 0;
}