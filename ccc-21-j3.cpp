#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector<unsigned int> instructions;

    // Keep taking instructions until detect # 99999
    while(true)
    {
        unsigned int N = 0;
        cin>>N;

        // Check if reached the end
        if(N == 99999)
        {
            break;
        }

        // Insert instruction into the set
        instructions.push_back(N);
    }

    bool prev_went_left; // whether left previous time

    // Displaying instructions
    for (unsigned int instruction : instructions)
    {
        unsigned int dir_digs_sum = instruction / 1000 + instruction / 10000, steps = instruction % 1000;

        if(dir_digs_sum == 0) // 0 - prev dir
        {
            cout<<(prev_went_left ? "left " : "right ")<<steps<<endl;
        }
        else if(dir_digs_sum % 2 == 0) // even - right
        {
            cout<<"right "<<steps<<endl;
            prev_went_left = false;
        }
        else // odd - left
        {
            cout<<"left "<<steps<<endl;
            prev_went_left = true;
        }
    }

    return 0;
}
