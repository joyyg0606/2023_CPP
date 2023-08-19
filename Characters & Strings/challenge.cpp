#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{

    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_msg{};
    cout << "Enter a secret message: ";
    getline(cin, secret_msg);

    string encrypted_msg{};

    cout << "\nEncrypting message..." << endl;

    for (char letter : secret_msg)
    {
        size_t position = alphabet.find(letter);
        if (position != string::npos)
        {
            encrypted_msg += key.at(position);
        }
        else
        {
            encrypted_msg += letter;
        }
    }

    cout << "Encrypted message: " << encrypted_msg << endl;

    string decrypted_msg{};
    cout << "\nDecrypting message..." << endl;

    for (char letter : encrypted_msg)
    {
        size_t position = key.find(letter);
        if (position != string::npos)
        {
            decrypted_msg += alphabet.at(position);
        }
        else
        {
            decrypted_msg += letter;
        }
    }

    cout << "Decrypted message: " << decrypted_msg << endl;

    cout << endl;
    return 0;
}