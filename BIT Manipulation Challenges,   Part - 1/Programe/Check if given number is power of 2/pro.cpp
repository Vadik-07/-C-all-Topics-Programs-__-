#include <iostream>

bool isPowerOfTwo(int n) {
    // Check if n is positive and (n & (n - 1)) is 0
    // Also, ensure that n is not 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPowerOfTwo(num)) {
        std::cout << num << " is a power of 2." << std::endl;
    } else {
        std::cout << num << " is not a power of 2." << std::endl;
    }

    return 0;
}