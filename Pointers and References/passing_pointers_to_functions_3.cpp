#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(const vector<string> *const v)
{
    for (auto str: *v) {
        // (*v).at(0) = "Funny";
        cout << str << " ";
    }
    cout << endl;

    // v = nullptr;
}

void display(int *array, int sentinel) {
    while (*array != sentinel) {
        cout << *array++ << " ";
    }
    cout << endl;
}

int main()
{
    cout << "==============================" << endl;
    vector<string> stooges{"a", "b", "c"};
    display(&stooges);

    cout << "==============================" << endl;
    int scores[]{100, 90, 80, 70, 60, -1};
    display(scores, -1);

    cout << endl;
    return 0;
}