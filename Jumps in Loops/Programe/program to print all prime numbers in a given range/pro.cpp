#include <iostream>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
  
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
  
    return true;
}

void printPrimesInRange(int start, int end) {
    for (int number = start; number <= end; number++) {
        if (isPrime(number)) {
            cout << number << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
  
    cout << "Enter the starting number: ";
    cin >> start;
  
    cout << "Enter the ending number: ";
    cin >> end;
  
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    printPrimesInRange(start, end);
  
    return 0;
}
