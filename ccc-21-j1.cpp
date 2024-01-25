#include <iostream>

using namespace std;


int main() {
    unsigned short B; // temp
    cin>>B;

    // Calculate atmospheric pressure
    unsigned short P = 5 * B - 400;

    cout<<P<<endl; //print atmospheric pressure

    // Print whether below, at, or above sea level
    if(P > 100)
        cout<<-1<<endl;
    else if(P < 100)
        cout<<1<<endl;
    else
        cout<<0<<endl;

    return 0;
}
