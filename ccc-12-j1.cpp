#include <iostream>
#include <string>

using namespace std;


int main()
{
    unsigned int speed_limit, curr_speed, fine;
    cin>>speed_limit>>curr_speed;

    // Determine fine amount
    if(curr_speed<=speed_limit)
        fine = 0;
    else if(curr_speed <= speed_limit + 20)
        fine = 100;
    else if(curr_speed <= speed_limit + 30)
        fine = 270;
    else
        fine = 500;

    cout<<(fine == 0 ? "Congratulations, you are within the speed limit!" : ("You are speeding and your fine is $" + to_string(fine) + "."))<<endl;

    return 0;
}
