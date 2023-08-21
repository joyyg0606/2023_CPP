#include <iostream>
#include <string>
#include <vector>

using namespace std;

unsigned long long fibonacci(unsigned long long);

unsigned long long fibonacci(unsigned long long n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fibonacci(n - 1);
}

int main()
{
    cout << fibonacci(3) << endl;
    cout << fibonacci(8) << endl;
    cout << fibonacci(12) << endl;
    cout << fibonacci(20) << endl;

    return 0;
}