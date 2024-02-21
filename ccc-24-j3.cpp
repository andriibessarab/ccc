#include <iostream>
#include <map>

using namespace std;

int main() {

    unsigned int N;

    cin >> N;

    map<int, int> score;

    for (int i = 0; i < N; ++i) {
        int s;
        cin >> s;
        score[s]++;
    }

    auto it = score.rbegin();
    it++;
    it++;
    cout << it->first << " " << it->second << endl;

    return 0;
}
