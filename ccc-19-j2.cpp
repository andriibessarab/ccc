#include <iostream>

using namespace std;


int main() {
    unsigned short N, L; // N - line count S - # of times char printed
    char C; // char to be printed

    cin>>N;

    for(int i=0; i<N; i++)
    {
        cin>>L>>C;

        // Decode
        for(int j=0; j<L; j++)
            cout<<C;
        cout<<endl;
    }

    return 0;
}
