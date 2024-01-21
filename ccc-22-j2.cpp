#include <iostream>

using namespace std;


int main()
{
    unsigned int N; // # of players
    cin>>N;

    int star_players_count = 0; // # of players w/ star rating >40
    for(int i = 0; i < N; i++)
    {
        unsigned int points;
        unsigned int fouls;

        cin>>points;
        cin>>fouls;

        star_players_count += points * 5 - fouls * 3 > 40 ? 1 : 0; // Increment counter if player has >40 points
    }

    // Output # of star players and whether team is gold
    cout<<star_players_count<<(star_players_count == N ? "+" : "")<<endl;

    return 0;
}
