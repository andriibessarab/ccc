#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main() {
    int N;
    cin >> N;

    vector<double> ordered_villages;

    for(int i = 0; i < N; i++) {
        int village;
        cin >> village;
        ordered_villages.push_back(village);
    }

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            if(ordered_villages[i] > ordered_villages[j]) {
                double temp = ordered_villages[i];
                ordered_villages[i] = ordered_villages[j];
                ordered_villages[j] = temp;
            }
        }
    }

    double min_size = MAXFLOAT;

    for(int i = 1; i < N - 1; i++) {
        double size = (ordered_villages[i] - ordered_villages[i-1]) / 2 + (ordered_villages[i+1] - ordered_villages[i]) / 2;

        if(size < min_size) {
            min_size = size;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << min_size << endl;

    return 0;
}
