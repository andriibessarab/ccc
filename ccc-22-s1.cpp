#include <iostream>
#include <string>

using namespace std;


int main()
{
    unsigned int N;
    cin>>N;

    int combo_count = 0; // count combinations
    int temp = N; // duplicate the number
    while(temp > 0)
    {
        combo_count += temp % 4 == 0 ? 1 : 0;
        temp -=5;
    }
    
    combo_count += temp == 0 ? 1 : 0; // account for a combo of just 5s
    
    cout<<combo_count<<endl;

    return 0;
}
