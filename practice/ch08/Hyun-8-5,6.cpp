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
        int arraynum;
    public :
        MyQueue(int capacity) : BaseArray(capacity){
            this->arraynum =0;
        }
        void enqueue(int val){
            put(arraynum++, val);
        }
        int qCap()
        {
            return getCapacity();
        }
        int length()
        {
            return arraynum;
        }
        int dequeue()
        {
            int returnQ = get(0);
            for (int i = 1; i < arraynum; ++i) {
                put(i - 1, get(i));
            }
            arraynum--;
            return returnQ;
        }
};
int main()
{
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라 >>";
    for(int i = 0; i < 5; i++){
        cin >> n;
        mQ.enqueue(n);
    }
    cout << "큐의 용량 : " << mQ.qCap() << " 큐의 크기 : "<< mQ.length()<<endl;
    while(mQ.length() != 0){
        cout << mQ.dequeue() << ' ';
    }
    cout << endl << "큐의 현재크기 : " << mQ.length() <<    endl;
    return 0;
}