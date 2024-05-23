#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Circle
{
private:
    int radius;
    string name;

public:
    void setCircle(string name, int radius)
    {
        this->name = name;
        this->radius = radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
    string getName()
    {
        return name;
    }
};

class CircleManager
{
    Circle *p;
    int size;

public:
    CircleManager(int n)
    {
        p = new Circle[n];
        size = n;
        for (int i = 0; i < size; i++)
        {
            string name;
            int radius;
            cout << "원 " << i+1 << "의 이름과 반지름" << endl;
            cin >> name >> radius;
            p[i].setCircle(name, radius);
        }
    }
    ~CircleManager()
    {
        delete[] p;
    }
    void searchByName()
    {
        string name;
        cout << "이름를 입력하세요. : ";
        cin >> name;

        for (int i = 0; i < size; i++)
        {
            if (p[i].getName() == name)
            {
                cout << p[i].getArea() << endl;
            }
        }
    }
    void searchByArea()
    {
        int area;
        cout << "최소 면적을 입력하세요. : ";
        cin >> area;
        cout << "보다 큰 원을 검색합니다"<<endl;
        for (int i = 0; i < size; i++)
        {
            if (p[i].getArea() >= area)
            {
                cout << p[i].getName() << " " <<p[i].getArea() << endl;
            }
        }
    }
};

int main()
{
    int n;
    cout << "원의 개수 : ";
    cin >> n;
    CircleManager cm(n);
    cm.searchByName();
    cm.searchByArea();
    return 0;
}