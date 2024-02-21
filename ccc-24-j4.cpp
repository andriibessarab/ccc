#include <iostream>

using namespace std;


int main() {
    string s_types, s_shown;
    cin >> s_types >> s_shown;

    char silly_key_shown = 0, silly_key_typed = 0, quiet_key = 0;

    int s_typed_index = 0, s_shown_index = 0;

    while (s_typed_index != s_types.length() && s_shown_index != s_shown.length())  {
        char c_typed = s_types[s_typed_index], c_shown = s_shown[s_shown_index];
        
        // if c type equals c shown go to next char in both strings
        if (c_typed == c_shown) {
            s_typed_index++;
            s_shown_index++;
            continue;
        }

        // if we know silly key and we found it go to next letter
        if (silly_key_shown != 0 && silly_key_shown == c_shown) {
            s_typed_index++;
            s_shown_index++;
            continue;
        } else if (quiet_key != 0 && quiet_key == c_typed) {
            s_typed_index++;
            continue;
        } else {
            // create two vars for mvng indexes
            int s_typed_index_temp = s_typed_index, s_shown_index_temp = s_shown_index;

            if (s_types.length() == s_shown.length()) {
                cout << c_typed << " " << c_shown << "\n";
                cout << "-\n";
                return 0;
            }

            while (true) {
                if (s_typed_index + 1 >= s_types.length() && s_shown_index + 1 >= s_shown.length()) {
                    silly_key_shown = c_shown;
                    silly_key_typed = c_typed;
                    s_shown_index++;
                    s_typed_index++;
                    break;
                } else if (s_typed_index + 1 >= s_types.length() && s_shown_index >= s_shown.length())
                {
                    quiet_key = c_typed;
                    s_typed_index++;
                    break;
                }

                if (s_types[s_typed_index + 1] == s_shown[s_shown_index]) {
                    quiet_key = c_typed;
                    s_typed_index++;
                    break;
                } else if (s_types[s_typed_index] == s_types[s_typed_index + 1]) {
                    s_typed_index_temp++;
                } else {
                    silly_key_shown = c_shown;
                    silly_key_typed = c_typed;
                    s_shown_index++;
                    s_typed_index++;
                    break;
                }
            }
        }
    }
    
    // if stilld ditn reach the end of both strings than last character is quiet key
    if(quiet_key == 0 && s_typed_index != s_types.length()){
        quiet_key = s_types[s_typed_index];
    }
    
    cout << silly_key_typed << " " << silly_key_shown << "\n";
    cout << (quiet_key == 0 ? '-' : quiet_key) << "\n";
    
    return 0;
}
