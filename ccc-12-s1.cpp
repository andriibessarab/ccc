#include <iostream>

using namespace std;

int main() {
    int j;
    cin >> j;
    
    if (j < 4) {
        cout << 0 << endl;
        return 0;
    }

    int combination = (j - 1) * (j - 2) * (j - 3) / 6;

    cout << combination << endl;
}
