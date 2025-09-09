#include <iostream>

using namespace std;

// C++ style function to double the number
int doubleNumber(int n) {
    return n * 2;
}

int main() {
    int num;
    cout << "Enter a number to double it: ";
    cin >> num;

    int result = doubleNumber(num);
    cout << "The doubled number is: " << result << endl;

    return 0;
}
