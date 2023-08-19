#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string letters{};

    cout << "Enter a string of letters: ";
    getline(cin, letters);

    size_t num_letters = letters.length();

    int position{0};

    for (char letter : letters) {
        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            cout << " ";
            --num_spaces;
        }

        for (size_t j = 0; j < position; j++) {
            cout << letters.at(j);
        }

        cout << letter;

        for (int j = position - 1; j >= 0; --j) {
            auto k = static_cast<size_t>(j);
            cout << letters.at(k);
        }

        cout << endl;
        ++position;
    }

    cout << endl;
    return 0;
}
