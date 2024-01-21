#include <iostream>
#include <unordered_map>

using namespace std;


int main() {
    // Peppers and their spiciness
    const unordered_map<string, unsigned int> peppers =
        {
            {"Poblano",  1500},
            {"Mirasol",  6000},
            {"Serrano",  15500},
            {"Cayenne",  40000},
            {"Thai",     75000},
            {"Habanero", 125000},
        };

    unsigned int N; // N # of peppers
    unsigned int T = 0; // total spiciness
    cin>>N;

    // prompt for peppers and add spiciness to T
    for (int i = 0; i < N; i++) {
        string pepper;
        cin>>pepper;
        T += peppers.at(pepper);
    }

    cout << T << endl; // output total spiciness

    return 0;
}
