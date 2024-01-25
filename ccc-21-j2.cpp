#include <iostream>

using namespace std;


int main() {
    unsigned short N; // temp
    cin>>N;

    // Store highest bid and name of the bidder
    string h_name;
    unsigned short h_bid = 0;

    // Collect the bids
    for(int i=0; i<N; i++)
    {
        string name;
        unsigned short bid;

        cin>>name>>bid;

        // Check if this is the highest bid yet
        if(bid > h_bid)
        {
            h_bid = bid;
            h_name = name;
        }
    }

    cout<<h_name<<endl; // print name of highest bidder

    return 0;
}
