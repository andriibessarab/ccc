#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int hc = 0, sc = 0; // happy and sad counter

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ':' && s[i+1] == '-')
        {
            if(s[i+2] == ')')
                hc++;
            else if (s[i+2] == '(')
                sc++;
        }
    }

    // Check what mood he is in
    if(hc == 0 && sc == 0)
        cout<<"none"<<endl;
    else if(hc > sc)
        cout<<"happy"<<endl;
    else if(sc>hc)
        cout<<"sad"<<endl;
    else
        cout<<"unsure"<<endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int hc = 0, sc = 0; // happy and sad counter

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ':' && s[i+1] == '-')
        {
            if(s[i+2] == ')')
                hc++;
            else if (s[i+2] == '(')
                sc++;
        }
    }

    // Check what mood he is in
    if(hc == 0 && sc == 0)
        cout<<"none"<<endl;
    else if(hc > sc)
        cout<<"happy"<<endl;
    else if(sc>hc)
        cout<<"sad"<<endl;
    else
        cout<<"unsure"<<endl;

    return 0;
}
