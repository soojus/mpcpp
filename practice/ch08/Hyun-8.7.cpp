#include <iostream>
#include <string>
using namespace std;

class BaseMemory{
    char *mem;
protected:
    BaseMemory(int size){
        mem = new char[size];
    }
    ~BaseMemory(){
        delete[] mem;
    }
    char getmem(int i){
        return mem[i];
    }
    void setmem(int i, char x){
        mem[i] = x;
    }
};

class Rom : public BaseMemory{
    int dataSize;
public:
    Rom(int size, char* data, int dataSize) : BaseMemory(size){
        for(int i =0; i<dataSize; i++) setmem(i, data[i]);
        this->dataSize = dataSize;
    }
    char read(int i){
        return getmem(i);
    }
};

class Ram : public BaseMemory{
    
public:
    Ram(int size) : BaseMemory(size){

    }
    void write(int i , char x){
        setmem(i, x);
    }
    char read(int i)
    {
        return getmem(i);
    }
};


int main ()
{
    char x[5] = {'h', 'e', 'l', 'l', 'o'};
    Rom biosRom(1024*10, x, 5);
    Ram mainMemory(1024*1024);
    for(int i =0; i<5; i++) mainMemory.write(i, biosRom.read(i));
    for(int i =0; i<5; i++) cout << mainMemory.read(i);
    
    return 0;
}