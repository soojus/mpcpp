#include <iostream>

using namespace std;
int main(){
    int a , b =0;
    cout<< "두 수를 입력하여라>>";
    cin >> a >> b;
    if(a>b) cout << "큰 수 = "<<a;
    else cout<< "큰 수 = "<<b;
    return 0;

}