#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int k = 0;
    cout<< "끝수를 입력하세요>>";
    cin >> k;
    int sum =0;
    for(a ; a<=k ; a++)
    {
        sum += a;
    }
    cout << "끝수의 합 = " << sum;
    return 0;
}