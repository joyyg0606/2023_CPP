#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{

    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "=========================" << endl;

    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout << "Your full name is " << full_name << endl;

    cout << "Enter yoru full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    for (size_t i{0}; i < strlen(full_name); ++i) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    if(strcmp(temp, full_name) == 0) {
        cout << temp << " and " << full_name << " are the same" << endl;
    } else {
        cout << temp << " and " << full_name << " are different " << endl;
    }



    char first_name[7]{"Bjarne"};
    char last_name[11]{"Stroustrup"};
    char whole_name[27]{};

    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);

    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);

    int whole_name_length = strlen(whole_name);

    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";


    cout << endl;
    return 0;
}