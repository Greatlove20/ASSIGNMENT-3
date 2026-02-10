#include <iostream>
#include <vector>
#include <string>

using namespace std;
string longestString(const vector<string>& words) {
    if (words.empty()) {
        return "";
    }

    string longest = words[0];

    for (const string& word : words) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    return longest;
}

int main() {
    vector<string> words = {
        "apple",
        "banana",
        "pineapple",
        "kiwi",
        "orange"
    };

    string result = longestString(words);

    cout << "The longest word is: " << result << endl;

    return 0;
}