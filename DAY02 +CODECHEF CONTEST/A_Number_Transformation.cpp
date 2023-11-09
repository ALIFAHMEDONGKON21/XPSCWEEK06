#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x > y) {
            // If x is greater than y, it's impossible to transform x into y
            cout << "0 0" << endl;
        } else if (x == y) {
            // If x is already equal to y, choose a=1 and b=1
            cout << "1 1" << endl;
        } else if (y % x == 0) {
            // If y is a multiple of x, choose a=2 and b=y/x
            cout << "2 " << y / x << endl;
        } else {
            // Otherwise, choose a=1 and b=y
            cout << "1 " << y << endl;
        }
    }

    return 0;
}
