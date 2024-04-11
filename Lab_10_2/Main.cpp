#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string Find(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Failed to open the file " << filename << endl;
        return "";
    }

    string word;
    while (file >> word)
        if (!word.empty() && word[0] == 'a') {
            file.close();
            return word;
        }

    file.close();
    return "";
}

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    string firstWord = Find(filename);
    if (firstWord.empty())
        cout << "No word starting with 'a' found." << endl;
    else
        cout << "First word starting with 'a': " << firstWord << endl;

    return 0;
}
