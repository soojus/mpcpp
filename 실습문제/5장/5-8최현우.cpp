#include <iostream>
#include <string>
using namespace std;

class MyIntStack{
    int* p;
    int size;
    int tos;
    public:
    MyIntStack(){

    }
    MyIntStack(int size){
        p = new int[size];
        this->size = size;
        tos = -1;
    }
    MyIntStack(const MyIntStack& s){
        p = new int[s.size];
        size = s.size;
        tos = s.tos;
        for(int i = 0; i <= tos; i++){
            p[i] = s.p[i];
        }
    }
    ~MyIntStack(){
        delete[] p;
        cout << "해제됨" <<endl;
    }
    bool push(int n){
        p[++tos] = n;
        return true;
    }
    bool pop(int &n){
        n = p[tos--];
        return true;
    }
};

int main()
{
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값"<< n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값"<< n << endl;
    return 0;
}