#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    cout << "Input the value for the nth term: ";
    cin >> n;

    cout << endl;
    while (i <= n) {
        int square = i * i;
        cout << i << "*" << i << " = " << square << endl;
        sum += square;
        i++;
    }

    cout << "The sum of the above series is: " << sum << endl;

    return 0;
}

