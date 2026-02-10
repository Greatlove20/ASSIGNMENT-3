#include <iostream>
#include <vector>
using namespace std;

int sumIntegers(vector<int> numbers) {
int sum = 0;
for (int num: numbers) {
sum += num;
}
return sum;
}

int main() {
    vector<int> myNumbers = {10, 20, 30, 40, 50};
    
    int totalSum = sumIntegers(myNumbers);
    cout << "The sum of the integers is: " << totalSum << endl;
    
    return 0;
}