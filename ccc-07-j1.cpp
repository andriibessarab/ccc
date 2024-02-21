#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    unsigned short a, b, c; // the three ints
    cin>>a>>b>>c;

    // Print middle number
    if(a > min(b, c) && a < max(b, c))
        cout<<a<<endl;
    else if(b > min(a, c) && b < max(a, c))
        cout<<b<<endl;
    else
        cout<<c<<endl;

    return 0;
}
