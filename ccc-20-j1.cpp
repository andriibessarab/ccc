#include <iostream>

using namespace std;


int main() {
    unsigned int S, M, L, score;
    cin>>S>>M>>L;

    score = S + (2 * M) + (3 * L); // calculate the happiness score

    cout<<(score >= 10 ? "happy" : "sad"); // if score is more than 10, print happy else sad

    return 0;
}
