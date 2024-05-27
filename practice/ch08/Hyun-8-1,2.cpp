#include <iostream>
#include <string>

using namespace std;
class Circle{
    int radius;
    public:
        Circle(int radius){
            this->radius = radius;
        }
        int getRadius(){
            return radius;
        }
        void setRadius(int radius){
            this->radius = radius;
        }
        double getArea(){
            return 3.14 * radius * radius;
        }

};

class NamdCircle : public Circle{
    string name;
    public:
        NamdCircle() : Circle(0) {}
        NamdCircle(string name, int radius) : Circle(radius){
            this->name = name;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void show()
        {
            cout << name << "의 면적은 " << getArea() << endl;
        }
};

int main()
{
    NamdCircle waffle("waffle",3);
    waffle.show();

    NamdCircle pizza[5];
    cout<< "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
    for (int i = 0; i < 5; i++)
    {
        int radius;
        string name;
        cout << i << ">>";
        cin >> radius >> name;
        pizza[i].setName(name);
        pizza[i].setRadius(radius);
        /* code */
    }
    double max =0;
    NamdCircle temp;
    for(int i =0; i< 5 ; i++)
    {
        
        if(max<pizza[i].getArea())
        {
            max = pizza[i].getArea();
            temp = pizza[i];
        }
    }
    cout << temp.getName() << "의 면적이 가장 큽니다." << endl;
    
    return 0;
}