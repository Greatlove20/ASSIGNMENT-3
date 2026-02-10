#include <iostream>
using namespace std;

int countVowels(string text) {
    int count = 0;

    for (char c : text) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    cout << countVowels("Education");
    return 0;
}