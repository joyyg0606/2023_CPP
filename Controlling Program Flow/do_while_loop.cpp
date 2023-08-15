#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{

    char selection{};
    do {
        cout << "\n------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        if (selection == '1')
            cout << "You chose 1" << endl;
        else if (selection == '2')
            cout << "You chose 2" << endl;
        else if (selection == '3')
            cout << "You chose 3" << endl;
        else if (selection == 'q' || selection == 'Q')
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option" << endl;

    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}