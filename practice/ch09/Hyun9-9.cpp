#include <iostream>
#include <string>
using namespace std;

class Printer{
protected:
    string name, model;
    int paper, ink;
public:
    Printer(string n = "", string m = "", int p = 0, int i = 0){
        name = n;
        model = m;
        paper = p;
        ink = i;
    }
    virtual void print(int num) = 0;
    virtual void show() = 0;
};

class InkjetPrinter : public Printer{
public:
    InkjetPrinter(string n = "Officejet V40", string m = "HP",int p = 5, int i = 10) : Printer(n,m, p, i){}
    virtual void print(int num){
        if(paper>=num && ink>=num){
            cout << name << "을(를) 잉크젯으로 출력합니다." << endl;
            paper -= num;
            ink -= num;
        }
        else cout << "용지 혹은 잉크가 부족합니다. " << endl;
    }
    virtual void show(){
        cout << name << ", " << model << ", 남은종이 : " << paper << ", 남은잉크 :" << ink << endl;
    }
};
class LaserPrinter : public Printer{
public:
    LaserPrinter(string n = "SCX-6", string m = "삼성전자",int p = 3, int i = 20) : Printer(n,m, p, i){}
    virtual void print(int num){
        if(paper>=num && ink>=num){
            cout << name << "을(를) 레이저로 출력합니다." << endl;
            paper -= num;
            ink -= num;
        }
        else cout << "용지 혹은 잉크가 부족합니다. " << endl;

        
    }
    virtual void show(){
        cout << name << ", " << model << ", 남은종이 : " << paper << ", 남은잉크 :" << ink << endl;
    }
};

int main(){
    int choice;
    int num;
    InkjetPrinter ip;
    LaserPrinter lp;
    cout << "잉크젯 : "; ip.show();
    cout << "레이져 : "; lp.show();
    cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력"<< endl;
    while(1){


    cin >> choice >> num;
    if(choice == 1){
        ip.print(num);
    }
    else if(choice == 2){
        lp.print(num);
    }
    else {cout << "다시입력"<<endl;}
    ip.show();
    lp.show();
    }

    return 0;
}