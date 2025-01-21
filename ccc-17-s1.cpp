#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int team1[N], team2[N];

    for (int i = 0; i < N; i++) {
        cin >> team1[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> team2[i];
    }

    int team1_sum = 0, team2_sum = 0, last_day_equal = 0;

    for (int i = 0; i < N; i++) {
        team1_sum += team1[i];
        team2_sum += team2[i];

        if (team1_sum == team2_sum) {
            last_day_equal = i + 1;
        }
    }

    cout << last_day_equal << endl;

    return 0;
}
