#include <iostream>
using namespace std;

class MyIntStack {
private:
    int *p;
    int size;
    int tos;
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s);
    ~MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack() {
    p = new int[10];
    size = 10;
    tos = -1;
}

MyIntStack::MyIntStack(int size) {
    p = new int[size];
    this->size = size;
    tos = -1;
}

MyIntStack::MyIntStack(const MyIntStack& s) {
    p = new int[s.size];
    size = s.size;
    tos = s.tos;
    for(int i = 0; i <= tos; i++){
        p[i] = s.p[i];
    }
}

bool MyIntStack::push(int n) {
    if(tos == 9) return false;
    else {
        p[++tos] = n;
        return true;
    }
}

bool MyIntStack::pop(int &n) {
    if(tos == -1) return false;
    else {
        n = p[tos--];
        return true;
    }
}


MyIntStack::~MyIntStack() {
    delete[] p;
}


int main(int argc, char const *argv[])
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