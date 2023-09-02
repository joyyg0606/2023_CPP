#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"


class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test Constructor (" << data << ")" << std::endl; }
    Test(int data) : data{data} { std::cout << "Testing constructor (" << data << ")" << std::endl; }
    int get_data() const { return data; }
    ~Test() { std::cout << "Test destructor (" << data << ")" << std::endl; }
};

using namespace std;

int main() {
    Test *t1 = new Test{1000};
    delete t1;

    std::unique_ptr<Test> t2{new Test{100}};
    std::unique_ptr<Test> t3 = std::make_unique<Test>(1000);

    std::unique_ptr<Test> t4;
    t4 = std::move(t2);
    if (!t2) {
        std::cout << "t2 is nullptr" << std::endl;
    }

    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
    std::cout << *a1 << std::endl;
    a1->deposit(5000);
    std::cout << *a1 << std::endl;

    std::vector<std::unique_ptr<Account>> accounts;

    accounts.push_back(make_unique<Checking_Account>("James", 1000));
    accounts.push_back(make_unique<Savings_Account>("James", 1000));
    accounts.push_back(make_unique<Trust_Account>("Bobby", 1000));


    for (auto &acc: accounts) {
        std::cout << *acc << std::endl;
    }

    return 0;
}