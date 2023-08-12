# include <iostream>

using namespace std;

int main() {

    // int num1{10};
    // int num2{20};

    // num1 = num2 = 1000;
    // assigns right to left

    // cout << "num 1 is " << num1 << endl;
    // cout << "num 2 is " << num2 << endl;

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    // cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

    // cout << num2 << " / " << num1 << " = " << num2 / num1 << endl;

    // cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    /*===================================================================================
    const double usd_per_eur{1.9};

    cout << "Welcome to the EUR to USD converter\n " << endl;
    cout << "Enter the value in EUR: ";

    double euros{0.0};
    double dollars{0.0};

    cin >> euros;
    dollars = euros * usd_per_eur;

    cout << euros << " euro(s) is equivalent to " << dollars << " dollar(s)" << endl;
    ===================================================================================*/
    int counter{10};
    int result{0};

    // Example 1 - simple increment
    // cout << "Counter: " << counter << endl;

    // counter = counter + 1;
    // cout << "Counter: " << counter << endl;

    // counter++;
    // cout << "Counter: " << counter << endl;

    // ++counter;
    // cout << "Counter: " << counter << endl;

    // cout << "Counter: " << counter << endl;

    // result = ++counter;
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    cout << "Counter: " << counter << endl;

    result = ++counter + 10;
    // result = counter++ + 10;

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;


    cout << endl;
    return 0;
    
}