#include <iostream>

using namespace std;

enum GameMode{
    Easy = 10,
    Medium = 1000,
    Hard = 100000000000
};

int main(void){
    
    GameMode mode = Medium;

    switch(mode){
        case Easy:
        cout << "You will have fun! The enemies' health is " << Easy << endl;
        break;

        case Medium:
        cout << "You might have fun! the enemies' health is " << Medium << endl;
        break;

        case Hard:
        cout << "You won't have fun! The enemies' health is " << Hard << endl;
        break;
    }
    return 0;

}
