#include <iostream>
using namespace std;

int main() {

    string a;
    getline(cin,a);
    int count =0;
    char ch = 'x';
    for(char x : a){
        if(x == ch) count++;    
    }
    cout << count<< endl;

    return 0;
}