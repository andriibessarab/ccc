#include <iostream>

using namespace std;


int main() {
    unsigned short N, counter,  ind;
    char c;
    string s;
    cin>>N;

    for(int i=0; i<N; i++)
    {
        ind = 0;
        cin>>s;
        c=s[0];

        while(ind < s.length())
        {
            counter = 0;

            while(s[ind] == c)
            {
                counter += 1;
                ind++;
            }
            cout<<counter<<" "<<c<<(ind < s.length() ? " " : "");

            c=s[ind];
        }
        cout<<endl;
    }

    return 0;
}
