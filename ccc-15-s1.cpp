#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K;
    cin >> K;

    vector<int> A(K);

    int n;
    for(int i = 0; i < K; i++) {
        cin >> n;
        if(n == 0)
            A.pop_back();
        else
            A.push_back(n);
    }

    int sum = 0;
    for(int i : A) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}
