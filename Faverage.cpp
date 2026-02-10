#include <vector>
using namespace std;

double average(const vector<int>& nums) {
    if (nums.empty()) return 0;  

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return static_cast<double>(sum) / nums.size();
}