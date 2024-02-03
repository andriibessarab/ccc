#include <iostream>
#include <string>

using namespace std;


int main() {
    unsigned short K;
    string word;
    cin>>K>>word;

    // Print decoded word
    for(int i=0; i<word.length(); i++)
    {
        char C = word[i];
        unsigned short askii_val = C - ((3*(i+1)) + K); // undo conversion

        // Correct the value if its outside of  range
        if(askii_val < 65)
            askii_val += 26;
        else if (askii_val > 90)
            askii_val -= 26;

        cout<<static_cast<char>(askii_val);
    }
    cout<<endl;

    return 0;
}
