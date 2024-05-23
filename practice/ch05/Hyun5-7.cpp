#include <iostream>
#include <string>
using namespace std;

class MyIntStack{
    int p[10];
    int top;

    public:
        MyIntStack(){
            top = -1;
        }
        bool push(int n){
            
            if (n < 10){p[++top] = n;return true;}
            else {return false;}
        }
        bool pop(int &n){
            
            if(top>=0){n = p[top--]; return true;}
            else {return false;}
        }
};


int main(){
    MyIntStack a;
    for(int i =0; i<11; i++){
        if(a.push(i))cout<< i << ' ';
        else cout << endl << i+1 << " 번째 stack full"<< endl;
    }
    int n;
    for(int i =0; i<11; i++){
        if(a.pop(n))cout << n << ' ';
        else cout << endl << i+1 << " 번째 stack empty"<< endl;
    }
    return 0;
}