#include <iostream>

using namespace std;


int main() {
    unsigned short N, M; // N - adjective count M - similes count
    cin>>N>>M;

    string adjective[N];
    string similes[M];

    // Store adjectives and similes
    for(int i=0; i < N; i++)
        cin>>adjective[i];
    for(int i=0; i < M; i++)
        cin>>similes[i];

    // Print all combinations
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cout<<adjective[i]<<" as "<<similes[j]<<endl;
    return 0;
}
