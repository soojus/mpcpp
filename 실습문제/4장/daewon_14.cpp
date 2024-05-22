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
};

PlayerManager::PlayerManager(int size){
    p = new Player[size];
    this->size = size;
}

PlayerManager::~PlayerManager(){
    delete[] p;
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

Random::Random(){}

Random::~Random(){}

int Random::next(){
    srand((unsigned)time(0));
    return rand();
}

int Random::nextInRange(int min, int max){
    return rand() % (max - min + 1) + min;
}

// class GamblingGame
class GamblingGame{
private:
    PlayerManager *pm;
public:
    void setGame();
    void endGame();
    void play();
};

void GamblingGame::setGame(){
    string name;
}

void GamblingGame::endGame(){
}

void GamblingGame::play(){
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
}


int main(int argc, char const *argv[])
{


    return 0;
}