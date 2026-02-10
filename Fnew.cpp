#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> reverseStrings(vector<string> strings) {
    for (string &s : strings) {
        reverse(s.begin(), s.end());
    }
    return strings;
}

int main() {
    vector<string> original = {"hello", "world", "c++"};
    vector<string> reversed = reverseStrings(original);

    cout << "Original strings:" << endl;
    for (const string& s : original) {
        cout << s << " ";
    }
    cout << endl;

    cout << "Reversed strings:" << endl;
    for (const string& s : reversed) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}