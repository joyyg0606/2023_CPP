#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;

    cout << "\nHow many small rooms would you like cleaned? ";
    int num_of_small_rooms{0};
    cin >> num_of_small_rooms;

    cout << "\nHow many large rooms would you like cleaned? ";
    int num_of_large_rooms{0};
    cin >> num_of_large_rooms;

    const double large_room_price{35};
    const double small_room_price{25};
    const double sales_tax{0.06};
    const int estimate_expiry{30}; // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << num_of_small_rooms << endl;
    cout << "Number of large rooms: " << num_of_large_rooms << endl;

    cout << "Price per small room $" << small_room_price << endl;
    cout << "Price per large room $" << large_room_price << endl;

    cout << "Cost: $" << (small_room_price * num_of_small_rooms) + (large_room_price * num_of_large_rooms) << endl;
    cout << "Tax: $" << (small_room_price * num_of_small_rooms) + (large_room_price * num_of_large_rooms) * sales_tax << endl;

    cout << "==============================================" << endl;

    cout << "Total estimate: $" << ((small_room_price * num_of_small_rooms) + (large_room_price * num_of_large_rooms)) + ((small_room_price * num_of_small_rooms) + (large_room_price * num_of_large_rooms) * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    cout << endl;

    return 0;
}