#include <iostream>
#include <vector>

using namespace std;
vector<int> removeEven(const vector<int>& nums) {
    vector<int> result;

    for (int num : nums) {
        if (num % 2 != 0) {  
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};

    vector<int> oddNumbers = removeEven(numbers);

    cout << "After removing even numbers: ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }

    return 0;
}