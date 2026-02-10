#include <iostream>
#include <string>

using namespace std;

// Function to remove vowels from a sentence
string removeVowels(const string& sentence) {
    string result = "";

    for (char c : sentence) {
        if (!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
              c=='A' || c=='E' || c=='I' || c=='O' || c=='U')) {
            result += c;
        }
    }

    return result;
}

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string noVowels = removeVowels(sentence);

    cout << "Sentence without vowels: " << noVowels << endl;

    return 0;
}