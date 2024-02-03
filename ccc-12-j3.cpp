
#include <iostream>

using namespace std;


int main() {
    const unsigned short C = 3, R = 3;
    
    // Icon as 2D array
    const char icon[C][R] = {
        {
            '*',
            'x',
            '*'
        },
        {
            ' ',
            'x',
            'x'
        },
        {
            '*',
            ' ',
            '*'
        }
    };

    unsigned short k; // scale factor
    cin >> k;

    // Scale the icon
    for (auto row : icon) {
        for (int i = 0; i < k; i++) {
            for (int col = 0; col < C; col++)
                for (int j = 0; j < k; j++)
                    cout << row[col];

            cout << endl;
        }
    }

    return 0;
}
