#include <iostream>
#include <string>
using namespace std;

class BaseArray{
    private : 
        int capacity;
        int* mem;
    protected : 
        BaseArray(int capacity){
            this->capacity = capacity;
            mem = new int[capacity];
        }
        ~BaseArray(){
            delete[] mem;
        }
        void put(int index, int val){
            mem[index] = val;
        }
        int get(int index){
            return mem[index];
        }
        int getCapacity(){
            return capacity;
        }
};

class MyQueue : public BaseArray{
    private :
    public :
        MyQueue(int capacity) : BaseArray(capacity){

        }
        void enqueue(int val){
            put(getCapacity()-1, val);
        }
};
int main()
{

}