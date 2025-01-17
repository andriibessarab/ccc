#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    unordered_set<int> col;
    unordered_set<int> row;

    int row_count = 0, col_count = 0;

    for (int i = 0; i < K; i++) {
        char type;
        int index;
        cin >> type >> index;

        if (type == 'R') {
            if (row.find(index) != row.end()) {
                row.erase(index);
                row_count--;
            } else {
                row.insert(index);
                row_count++;
            }
        } else {
            if (col.find(index) != col.end()) {
                col.erase(index);
                col_count--;
            } else {
                col.insert(index);
                col_count++;
            }
        }
    }

    cout << M * row_count + N * col_count - 2 * row_count * col_count << endl;

    return 0;
}
