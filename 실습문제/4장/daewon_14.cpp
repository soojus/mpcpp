#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// class Player
class Player{
private:
    string name;
public:
    void setPlayer(string name);
};

void Player::setPlayer(string name){
    this->name = name;
}

// class PlayerManager
class PlayerManager{
private:
    Player *p;
    int size;
public:
    PlayerManager(int size);
    ~PlayerManager();
    void setname(int id, string name);
};

PlayerManager::PlayerManager(int size){
    p = new Player[size];
    this->size = size;
}

PlayerManager::~PlayerManager(){
    delete[] p;
}

void PlayerManager::setname(int id, string name){
    p[id].setPlayer(name);
}

// class Random
class Random{
private:
    
public:
    Random();
    ~Random();
    int next();
    int nextInRange(int min, int max);
};

Random::Random(){ srand((unsigned)time(0)); }

Random::~Random(){}

int Random::next(){
    return rand();
}

int Random::nextInRange(int min, int max){
    return rand() % (max - min + 1) + min;
}

// class GamblingGame
class GamblingGame{
private:
    PlayerManager *pm;
    Random *r;
    void setGame();
public:
    GamblingGame();
    ~GamblingGame();
    void play();
};

GamblingGame::GamblingGame(){
    pm = new PlayerManager(2);
    r = new Random();
}

GamblingGame::~GamblingGame(){
    delete pm;
    delete r;
}

void GamblingGame::setGame(){
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
    string name[2];

    cout << "첫번째 선수 이름>>";
    cin >> name[0];
    pm->setname(0, name[0]);

    cout << "두번째 선수 이름>>";
    cin >> name[1];
    pm->setname(1, name[1]);
}

void GamblingGame::play(){
}




int main(int argc, char const *argv[])
{
    GamblingGame gg;
    gg.play();

    return 0;
}