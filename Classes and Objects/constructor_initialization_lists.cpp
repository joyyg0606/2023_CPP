#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
private:
    std::string name {"XXXXXXXX"};
    int health;
    int xp;

public:
    // Player();
    // Player(std::string name_val);
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

// Player::Player() 
//     : Player{"None", 0, 0} {
//         cout << "No-args constructor" << endl;
// }

// Player::Player(std::string name_val)
//     : Player{name_val, 0, 0} {
//         cout << "One-args constructor" << endl;
// }

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three-args constructor" << endl;
}


int main()
{
    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villain{"Villain", 100, 55};

    cout << endl;
    return 0;
}