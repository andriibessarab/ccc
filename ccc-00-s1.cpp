#include <iostream>
using namespace std;


int main() {
    const unsigned short M_WIN_ROUND[3] = { 35, 100, 10 };
    const unsigned short M_WIN_REWARD[3] = { 30, 60, 9 };

    unsigned short quarters_count;
    unsigned short m_rounds_since_win[3];

    cin>>quarters_count;
    cin>>m_rounds_since_win[0];
    cin>>m_rounds_since_win[1];
    cin>>m_rounds_since_win[2];

    unsigned short round_count = 0; // rounds since Martha started
    unsigned short machine_played = 0; // which machine is played this round (0-2)
    while(quarters_count > 0)
    {
        quarters_count--; // pay for round

        m_rounds_since_win[machine_played]++;

        // Check if win
        if (m_rounds_since_win[machine_played] == M_WIN_ROUND[machine_played])
        {
            m_rounds_since_win[machine_played] = 0;
            quarters_count += M_WIN_REWARD[machine_played]; // add win prize
        }

        machine_played = machine_played == 2 ? 0 : machine_played + 1; // switch to next machine
        round_count++; // increment round count
    }

    cout<<"Martha plays "<<round_count<<" times before going broke."<<endl;
    return 0;
}
