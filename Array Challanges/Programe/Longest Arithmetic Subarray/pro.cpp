#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    if (n <= 1) {
        cout << "Length of the longest arithmetic subarray: " << n << endl;
        return 0;
    }
    
    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int longestLength = 2; // At least two elements are needed for an arithmetic subarray
    int currentLength = 2;
    int diff = nums[1] - nums[0]; // Initial difference between first two elements
    
    for (int i = 2; i < n; ++i) {
        if (nums[i] - nums[i - 1] == diff) {
            currentLength++;
            longestLength = max(longestLength, currentLength);
        } else {
            diff = nums[i] - nums[i - 1];
            currentLength = 2;
        }
    }
    
    cout << "Length of the longest arithmetic subarray: " << longestLength << endl;
    
    return 0;
}
