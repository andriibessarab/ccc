#include <iostream>

using namespace std;

int main() {
    short t, s, h;
    cin >> t >> s >> h;

    for(int i=0; i<t; i++) {
        cout << "*";
        for(int j=0; j<2; j++) {
            for (int k=0; k<s; k++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0; i<3+2*s; i++)
        cout << "*";
    cout << endl;

    for(int i=0; i<h; i++) {
        for(int j=-1; j<s; j++)
            cout << " ";
        cout << "*" << endl;
    }
}
