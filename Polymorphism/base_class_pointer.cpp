#include <iostream>
#include <vector>


class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In account::withdraw" << std::endl;
    }
    virtual ~Account() { std::cout << "Account:: destructor" << std::endl; }
};

class Checking: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "in checking::withdraw" << std::endl;
    }
    virtual ~Checking() { std::cout << "Checking:: destructor" << std::endl; }
};

class Savings: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() { std::cout << "Savings:: destructor" << std::endl; }
};

class Trust: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() { std::cout << "Trust:: destructor" << std::endl; }
};

int main() {

    Account a;
    Account &ref = a;
    ref.withdraw(1000);

    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    std::cout << "Pointers" << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "\nArray" << std::endl;
    Account *array[] = {p1, p2, p3, p4};
    for (auto i = 0; i < 4; ++i) {
        array[i]->withdraw(1000);
    }

    std::cout << "\nArray" << std::endl;
    array[0] = p4;
    for (auto i = 0; i < 4; ++i) {
        array[i]->withdraw(1000);
    }

    std::cout << "\nVector" << std::endl;
    std::vector<Account *> accounts{p1, p2, p3, p4};
    for(auto acc_ptr: accounts) {
        acc_ptr->withdraw(1000);
    }

    std::cout << "\nVector" << std::endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr: accounts) {
        acc_ptr->withdraw(1000);
    }

    std::cout << "\nClean up" << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}