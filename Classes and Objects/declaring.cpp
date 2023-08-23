#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
public:
    //attributes
    string name {"player"};
    int health {100};
    int xp {3};

    //methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

class Account {
public:
    //attributes
    string name;
    double balance;

    //methods
    bool deposit(double bal) { balance += bal;
        cout << "In deposit" << endl;
    }
    bool withdraw(double bal) {balance -= bal;
        cout << "In withdraw" << endl;
    }
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    // Account joe_account;

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 10;
    frank.talk("hi");

    // Player hero;

    // Player player[]{frank, hero};

    // vector<Player> player_vec{frank};
    // player_vec.push_back(hero);

    Player *enemy = new Player;
    
    (*enemy).name = "Enemy";
    (*enemy).health = 100;

    enemy->xp = 15;
    enemy->talk("I will destroy you");

    cout << endl;
    return 0;
}