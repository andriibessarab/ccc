#include <iostream>

using namespace std;


int main() {
    unsigned short apples_3p, apples_2p, apples_1p, bananas_3p, bananas_2p, bananas_1p , apples_total, bananas_total; // keep # of shots
    cin>>apples_3p>>apples_2p>>apples_1p>>bananas_3p>>bananas_2p>>bananas_1p;

    // Calculate totals for bananas
    apples_total = apples_3p * 3 + apples_2p * 2 + apples_1p;
    bananas_total = bananas_3p * 3 + bananas_2p * 2 + bananas_1p;

    // Determine winner or tie
    if (apples_total > bananas_total)
        cout<<"A"<<endl;
    else if(bananas_total > apples_total)
        cout<<"B"<<endl;
    else
        cout<<"T"<<endl;

    return 0;
}
