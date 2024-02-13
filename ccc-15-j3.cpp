#include <iostream>

using namespace std;


bool isVowel(char c)
{
    return c=='a' || c=='e' || c=='o' || c=='i' || c=='u';
}


char nextVow(char c)
{
    if (c <='c')
        return 'a';
    else if (c <= 'g')
        return 'e';
    else if(c <= 'l')
        return 'i';
    else if(c <= 'r')
        return 'o';
    else
        return 'u';
}


char nextCons(char c)
{
    if(c=='z')
        return 'z';

    if(isVowel(c+1))
        return c+2;

    return static_cast<char>(static_cast<int>(c)+1);
}


int main() {
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];

        if(isVowel(c))
            cout<<c;
        else
            cout<<c<<nextVow(c)<<nextCons(c);
    }

    cout<<endl;
    return 0;
}
