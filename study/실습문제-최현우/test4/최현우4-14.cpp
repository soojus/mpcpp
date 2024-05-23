#include <iostream>
#include <string>
#include <algorithm>
#include <random>
using namespace std;

class Player
{
    string name;
    int number;

public:
    void setName(string name){
        this->name = name;
    }

    string getName()
    {
        return name;
    }
    int getNumber()
    {
        return number;
    }
};

class GambligGame
{
    Player *p;
    int num[3];

public:
    GambligGame()
    {
        p = new Player[2];
        string name;
        cout << "첫번째 선수 이름>>";
        cin >> name;
        p[0].setName(name);
        cout << "두번째 선수 숫자>>";
        cin >> name;
        p[1].setName(name);

    }
    ~GambligGame()
    {
        delete[] p;
    }
    void gamble()
    {
        for (int i = 0; i < 3; i++)
        {
            num[i] = uniform_int_distribution<> dis(0, 2);
        }
    }
    void play()
    {
        if()
    }
};