#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> sortStrings(vector<string> strings) {
    sort(strings.begin(), strings.end());
    return strings;
}

int main() {
    vector<string> words = {"banana", "apple", "cherry"};

    vector<string> sorted = sortStrings(words);

    for (const string &w : sorted) {
        cout << w << endl;
    }

    return 0;
}