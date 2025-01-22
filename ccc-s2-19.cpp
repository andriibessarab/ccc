#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    vector<int> Ns(T);

    for (int i = 0; i < T; i++) {
        cin >> Ns[i];
    }

    for (int N: Ns) {
        int a, b;

        for (a = 2; a < N; a++) {
            b = (N * 2) - a;

            if (isPrime(a) && isPrime(b)) {
                cout << a << " " << b << endl;
                break;
            }
        }
    }

    return 0;
}
