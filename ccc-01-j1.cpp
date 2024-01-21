#include <iostream>
#include <string>

using namespace std;


int main()
{
    unsigned int H;
    cin >> H;
    const unsigned int ROW_LEN = H * 2;

    for(int i = 1; i <= H; i += 2)
    {
        string stars(i, '*');
        string spaces(ROW_LEN - i * 2, ' ');

        cout << stars << spaces << stars << std::endl;
    }
    for(int i = H - 2; i > 0; i -= 2)
    {
        string stars(i, '*');
        string spaces(ROW_LEN - i * 2, ' ');

        cout << stars << spaces << stars << std::endl;
    }

    return 0;
}
