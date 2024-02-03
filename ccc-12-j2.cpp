#include <iostream>

using namespace std;


int main()
{
    unsigned int a, b, c, d; // the depths
    cin>>a>>b>>c>>d;

    // Detect fish
    if(a < b && b < c && c < d)
        cout<<"Fish Rising"<<endl;
    else if(a > b && b > c && c > d)
        cout<<"Fish Diving"<<endl;
    else if(a == b && b == c && c == d)
        cout<<"Fish At Constant Depth"<<endl;
    else
        cout<<"No Fish"<<endl;

    return 0;
}
