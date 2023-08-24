#include <iostream>
#include <vector>
#include "Account.h"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0)) {
        cout << "Deposit OK" << endl;
    } else {
        cout << "Deposit Not Allowed" << endl;
    }

    if (frank_account.withdraw(500.0)) {
        cout << "Withdrawal OK" << endl;
    } else {
        cout << "Not sufficient Funds" << endl;
    }

    if (frank_account.withdraw(1500.0)) {
        cout << "Withdraw OK" << endl;
    } else {
        cout << "Not sufficient Funds" << endl;
    }

    cout << endl;
    return 0;
}