#include <iostream>
#include <vector>
# include <iomanip>

using namespace std;

int main()
{
    /*
    for (int i{1}; i <= 10; i++)
        cout << i << endl;

    for (int i{1}; i <= 10; i += 2)
        cout << i << endl;

    for (int i{10}; i > 0; --i)
        cout << i << endl;

    for (int i{10}; i <= 100; i += 10) {
        if (i % 15 == 0)
            cout << i << endl;
    }

    for (int i{1}, j{5}; i <= 5; ++i, ++j)
        cout << i << " + " << j << " = " << (i + j) << endl;

    for (int i{1}; i <= 100; ++i) {
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }

    vector<int> nums{10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[1] << endl;

    */

    // int scores[]{10, 20, 30};

    // for (auto score: scores)
    //     cout << score << endl;

    // vector<double> temperatures{12.4, 14.4, 41.2, 52.1};
    // double avrg_temp{};
    // double total{};

    // for (auto temp: temperatures)
    //     total += temp;

    // if (temperatures.size() != 0)
    //     avrg_temp = total / temperatures.size();

    // cout << fixed << setprecision(1);
    // cout << "Average temperature is " << avrg_temp << endl;


    // for (auto val: {1,2,3,4,5})
    //     cout << val << endl;

    for (auto c: "This is a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;

    cout << endl;
    return 0;
}