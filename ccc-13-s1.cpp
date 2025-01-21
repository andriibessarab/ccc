#include <iostream>

using namespace std;

int main() {
    int Y;

    cin >> Y;

    while (true) {
        Y++;
        int a= Y/ 10000, b = Y / 1000 % 10, c = Y / 100 % 10, d = Y / 10 % 10, e = Y % 10;
        
        if (a != 0 && a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e) {
            break;
        } else if (a != 0 && a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e) {
            break;
        } else if (a == 0 && b != 0 && b != c && b != d && b != e && c != d && c != e && d != e) {
            break;
        } else if (a == 0 && b == 0 && c != 0 && c != d && c != e && d != e) {
            break;
        } else if (a == 0 && b == 0 && c == 0 && d != 0 && d != e) {
            break;
        } else if (a == 0 && b == 0 && c == 0 && d == 0 && e != 0) {
            break;
        } else if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0) {
            break;
        }
    }

    cout << Y << endl;
}
