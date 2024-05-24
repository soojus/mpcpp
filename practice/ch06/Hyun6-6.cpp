#include <iostream>
#include <algorithm>
using namespace std;

class ArrayUtility2{
private:

public:
    static int* concat(int s1[], int s2[],int size)
    {
        int* concatarray =new int[size*2];
        for(int i =0; i<size; i++)
        {
            concatarray[i] = s1[i];
        }
        for(int i =0; i<size; i++)
        {
            concatarray[size+i] = s2[i];
        }
        return concatarray;
    }
    static int* remove(int s1[], int s2[],int size, int& retSize)
    {
        for(int i=0; i<size; i++) 
        {
            std::find(s2, s2[i], s1[i]);
        }  
    }
};


int main()
{
    cout << "정수 5개를 입력 : ";
    int x[5];
    cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];
    cout << "배열 x에 삽입한다" <<endl;

    cout << "정수 5개를 입력 : ";
    int y[5];
    cin >> y[0] >> y[1] >> y[2] >> y[3] >> y[4];
    cout << "배열 y에 삽입한다" <<endl;
    cout <<"합친 정수 배열을 출력한다"<<endl;
    cout << ArrayUtility2::concat(x, y, 5);
    return 0;
}