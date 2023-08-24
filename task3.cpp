#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int Words_Count(string& File_name) {
    ifstream file(File_name);

    if (!file.is_open()) {
        cout << "File not found." << endl;
        return -1;
    }

    string line;
    int words = 0;
    while (getline(file, line)) {
        stringstream ss(line);
        string number_of_words;
        while (ss >> number_of_words) {
           words++;
        }
    }
    file.close();
    return words;
}

int main() {
    string File_name;
    cout << "Enter the File name: ";
    cin >> File_name;

    int Word_Count = Words_Count(File_name);

    if (Word_Count != -1) {
        cout << "Total number of words in the file: " << Word_Count << endl;
    }

    return 0;
}