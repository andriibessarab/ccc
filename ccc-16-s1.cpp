#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<pair<char, int>> word;

    string w, a;
    cin >> w >> a;

    if (w.size() != a.size()) {
        cout << "N" << endl;
        return 0;
    }

    for (int i = 0; i < w.size(); i++) {
        bool found = false;
        for (int j = 0; j < word.size(); j++) {
            if (word[j].first == w[i]) {
                word[j].second++;
                found = true;
                break;
            }
        }
        if (!found) {
            word.push_back(make_pair(w[i], 1));
        }
    }
    
    int asterisks = 0;
    for (char c : a) {
        if (c == '*') {
            asterisks++;
        }
    }

    for (char c : a) {
        bool found = false;
        for (auto & k : word) {
            if (k.first == c) {
                k.second--;
                if (k.second < 0) {
                    cout << "N" << endl;
                    return 0;
                }
                found = true;
                break;
            }
        }
        if(!found) {
                asterisks--;
                if (asterisks < 0) {
                    cout << "N" << endl;
                    return 0;
                }
            }
    }

    cout << "A" << endl;
}
