#include <iostream>
#include <string>

using namespace std;


int main()
{
    string instructions;
    cin>>instructions;

    for(int i=0; i<instructions.length(); i++)
    {
        char c = instructions[i];
        if(c >= 'A' && c <= 'T') // string
            cout<<c;
        else if(c == '+') // tighten sign
            cout<<" tighten ";
        else if(c== '-') // loosen sign
            cout<<" loosen ";
        else // number
        {
            cout<<c;
            
            // Check if next char is a letter or end of line meaning this instruction is over
            char next_char = instructions[i+1];
            if((next_char >= 'A' && next_char <= 'T') || next_char == '\0')
                cout<<endl;
        }
    }

    return 0;
}
