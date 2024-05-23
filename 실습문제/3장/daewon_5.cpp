#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
private:
    
public:
    Random();
    ~Random();
    int next();
    int nextInRange(int min, int max);
};

Random::Random(){ srand((unsigned)time(0)); }

Random::~Random(){}

int Random::next(){
    return rand();
}

int Random::nextInRange(int min, int max){
    return rand() % (max - min + 1) + min;
}


int main(int argc, char const *argv[])
{
    Random r;
    // RAND_MAX = 2147483647 이다.
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
    for(int i = 0; i < 10; i++)
    {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10개--" << endl;
    for(int i = 0; i < 10; i++)
    {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}