#include <iostream>

using namespace std;


int main()
{
    unsigned int P, C; // P stores # of packages, C stores # of collisions
    cin>>P>>C;

    // Calculate the total score
    const int score = P * 50 - C * 10 + (P > C ? 500 : 0);

    cout<<score<<endl; // output the score

    return 0;
}
