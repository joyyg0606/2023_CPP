#include <iostream>
#include <vector>

using namespace std;

int main()
{

    char user_entry{};
    vector<int> num_list{};

    do
    {
        cout << "\nP - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\n\nEnter your choice: ";
        cin >> user_entry;

        if (user_entry == 'p' || user_entry == 'P')
        {
            if (num_list.size() != 0)
            {
                cout << "[ ";
                for (auto num : num_list)
                    cout << num << ' ';
                cout << "]" << endl;
            }
            else
            {
                cout << "[ ] - List is empty" << endl;
            }
        }
        else if (user_entry == 'a' || user_entry == 'A')
        {
            int num_to_add{};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            num_list.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }
        else if (user_entry == 'm' || user_entry == 'M')
        {
            if (num_list.size() != 0)
            {
                int total{};
                for (auto num : num_list)
                {
                    total += num;
                }
                cout << "The mean of the list is: " << static_cast<double>(total) / num_list.size() << endl;
            }
            else
            {
                cout << "[ ] - List is empty" << endl;
            }
        }

        else if (user_entry == 's' || user_entry == 'S')
        {
            if (num_list.size() != 0)
            {
                int smallest_num{num_list.at(0)};
                for (auto num : num_list)
                {
                    if (num < smallest_num)
                        smallest_num = num;
                }
                cout << "The smallest number in the list is " << smallest_num << endl;
            }
            else
            {
                cout << "[ ] - List is empty" << endl;
            }
        }

        else if (user_entry == 'l' || user_entry == 'L')
        {
            if (num_list.size() != 0)
            {
                int largest_num{};
                for (auto num : num_list)
                {
                    if (num > largest_num)
                        largest_num = num;
                }
                cout << "The largest number in the list is " << largest_num << endl;
            }
            else
            {
                cout << "[ ] - List is empty" << endl;
            }
        }
        else if (user_entry == 'q' || user_entry == 'Q')
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option" << endl;

    } while (user_entry != 'q' && user_entry != 'Q');

    cout << endl;
    return 0;
}