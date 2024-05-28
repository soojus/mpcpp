#include <iostream>
#include <string>
using namespace std;

class Converter{
protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;
public:
    Converter(double ratio){
        this->ratio = ratio;
    }
    void run(){
        double src;
        cout<< getSourceString() << "을 " << getDestString() << "로 바꿉니다. >> ";
        cin>> src;
        cout<< "변환 결과 : " << convert(src) << getDestString() << endl;
    }
};

class WonToDollar : public Converter{
public:
    WonToDollar(double ratio) : Converter(ratio){
        
    }
    virtual double convert(double src){
        return src/ratio;
    }
    virtual string getSourceString(){
        return "원";
    }
    virtual string getDestString(){
        return "달러";
    }
};

class KmToMile : public Converter{
public:
    KmToMile(double ratio) : Converter(ratio){
        
    }
    virtual double convert(double src){
        return src/ratio;
    }
    virtual string getSourceString(){
        return "km";
    }
    virtual string getDestString(){
        return "mile";
    }
};

int main(){
    WonToDollar wd(1010);
    wd.run();

    KmToMile toMile(1.609344);
    toMile.run();
    return 0;
}