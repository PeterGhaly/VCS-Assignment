#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getSum(vector<int> &nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}


int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = getSum(nums);

    cout << sum << endl;

    return 0;
}