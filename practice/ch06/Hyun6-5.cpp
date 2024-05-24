#include <iostream>
using namespace std;

class ArrayUtility{
    private:

    public:
        ArrayUtility(){}
        static void inttodouble(int source[], double dest[], int size){
            for(int i =0 ; i<size; i++)
            {
                dest[i] = (double)source[i];
            }
        }
        static void doubletoint(double source[], int dest[], int size){
            for(int i =0 ; i<size; i++){
                dest[i] = (int)source[i];
            }
        }
};

int main(){
    int x[] = {1,2,3,4,5};
    double y[5];
    double z[]= {9.9 , 8.8, 7.7, 6.6, 5.5};
    ArrayUtility::inttodouble(x, y, 5);
    for(int i =0; i<5; i++)cout << y[i] << ' ';
    cout << endl;
    ArrayUtility::doubletoint(z, x, 5);
    for(int i =0; i<5; i++)cout << x[i] << ' ';
    cout << endl;

    return 0;
}