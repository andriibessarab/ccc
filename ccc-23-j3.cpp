#include <iostream>

using namespace std;


int main() {
    int availability_counter[5] = { 0, 0, 0, 0, 0 }; // counter how many people can attend each day

    unsigned int N; // # of people interested
    cin>>N;

    for(int i=0; i<N; i++)
    {
        string availability; // store this person's availability
        cin>>availability;

        // Add person's availability to total counter for all 5 days
        for(int j=0; j<5; j++)
        {
            availability_counter[j] += availability[j] == 'Y' ? 1 : 0;
        }
    }

    int max_availability = 0; // store the max availability of all days

    // Determine max availability
    for(int a : availability_counter)
    {
        if(a > max_availability)
            max_availability = a;
    }

    bool more_than_one = false; // enables the printing of commas for any additional day
    for(int i=0; i<5; i++)
    {
        if(availability_counter[i] == max_availability)
        {
            cout << (more_than_one ? "," : "") << i+1;
            more_than_one = true;
        }

    }
    cout<<endl; // bring end cursor to next line

    return 0;
}
