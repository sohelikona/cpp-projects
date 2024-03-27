#include "encryption.h"
#include <fstream>
#include <cctype>

using namespace std;

bool encryptfile(const string& filename, bool encrypt) {
    ifstream inFile(filename);
    if (!inFile) {
        return false;
    }

    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();
}