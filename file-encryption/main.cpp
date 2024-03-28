#include <iostream>
#include "encryption.h"

using namespace std;

int main() {
    
    string filename;
    char mode;

    cout << "Enter the filename: ";
    getline(cin >> ws, filename);

    cout << "Encrypt (e) or Decrypt (d)? ";
    cin >> mode;

    if (mode == 'e' || mode == 'E') {
        if (encryptfile(filename, true)) {
            cout << "Encryption completed successfully\n\n";
        } else {
            cerr << "Error: unable to perform encryption. \n\n";
        }
    } else if (mode == 'd' || mode == 'D') {
        if (encryptfile(filename, false)) {
            cout << "Decryption completed successfully.\n\n\n";
        } else {
            cerr << "Error: Unable to perform decryption.\n\n\n";
        } 
    } else {
        cerr << "Error: Invalid mode selected. Use 'e' for encryption or 'd' for decription.\n\n\n";
    }

    return 0;
}