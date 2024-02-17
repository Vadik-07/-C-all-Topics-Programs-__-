#include <iostream>

using namespace std;

// Function to calculate the number of ways to pair up friends
int countWaysToPair(int n) {
    // Your logic to calculate the number of ways to pair up friends goes here
    // You can use recursion or dynamic programming to solve this problem
    if( n==0 || n==1 || n==2){
        return n;
    }

    return countWaysToPair(n-1) + countWaysToPair(n-2)*(n-1);
}

int main() {
    // Read the number of friends from the user
    int n;
    cout << "Enter the number of friends: ";
    cin >> n;

    // Calculate and output the result
    cout << "Number of ways to pair up friends: " << countWaysToPair(n) << endl;

    return 0;
}
