#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_map>

using namespace std;


int main() {
    //Words and what they should be replaced with
    unordered_map<string, string> words = {
            {"CU", "see you"},
            {":-)", "I'm happy"},
            {":-(", "I'm unhappy"},
            {";-)", "wink"},
            {":-P", "stick out my tongue"},
            {"(~.~)", "sleepy"},
            {"TA", "totally awesome"},
            {"CCC", "Canadian Computing Competition"},
            {"CUZ", "because"},
            {"TY", "thank-you"},
            {"YW", "you're welcome"},
            {"TTYL", "talk to you later"},
    };

    string s;

    do {
        cin>>s;

        // check if word needs to be replaced
        for_each(words.begin(), words.end(), [&s](const pair<string, string>& p) {
            if(s == p.first)
            {
                s = p.second;
            }
        });

        cout<<s<<endl;
    } while(s != "talk to you later"); // keep going until string equal the bye phrase

    return 0;
}
