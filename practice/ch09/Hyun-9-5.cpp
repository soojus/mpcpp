#include <iostream>
#include <string>
using namespace std;

class AbstractGate{
protected:
    bool x, y;
public:
    void set(bool x, bool y){this->x = x; this->y = y;}
    virtual bool operation() = 0;
};
class ANDGate : public AbstractGate{
public:
    ANDGate(bool x, bool y){set(x, y);}
    virtual bool operation(){
        return x && y;
    }
};

class ORGate : public AbstractGate{
public:
    ORGate(bool x, bool y){set(x, y);}
    virtual bool operation(){
        return x || y;
    }
};

class XORGate : public AbstractGate{
public:
    XORGate(bool x, bool y){set(x, y);}
    virtual bool operation(){
        return x ^ y;
    }
};
int main()
{   
    ANDGate andGate(true, false);
    ORGate orGate(true, false);
    XORGate xorGate(true, false);
    cout << andGate.operation() << endl;
    cout << orGate.operation() << endl;
    cout << xorGate.operation() << endl;
    return 0;
}