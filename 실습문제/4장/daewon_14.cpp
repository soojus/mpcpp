#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits> // numeric_limits를 사용하기 위해 필요
using namespace std;

// class Player
class Player{
private:
    string name;
public:
    void setPlayer(string name);
    string getname();
};

void Player::setPlayer(string name){
    this->name = name;
}

string Player::getname(){
    return name;
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
    string getname(int id);
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

string PlayerManager::getname(int id){
    return p[id].getname();
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

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void GamblingGame::play(){
    setGame();
    int currentPlayer = 0;
    int numOfIntegers = 3;
    int randomNumbers[numOfIntegers-1];
    char Enter[1];

    while(1){
        cout << pm->getname(currentPlayer) << ":<Enter>";
        // cin.getline(Enter,'\n');
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "              ";
        for(int i = 0; i < numOfIntegers; i++){
            randomNumbers[i] = r->nextInRange(0, 2);
            cout << randomNumbers[i] << " ";
        }

        if(randomNumbers[0] == randomNumbers[1] && randomNumbers[1] == randomNumbers[2]){
            cout << pm->getname(currentPlayer) << "님 승리!!" << endl;
            break;
        } else {
            cout << "아쉽군요!" << endl;
            currentPlayer = (currentPlayer + 1) % 2;
        }
    }
}




int main(int argc, char const *argv[])
{
    GamblingGame gg;
    gg.play();

    return 0;
}