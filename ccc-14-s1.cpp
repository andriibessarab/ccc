#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int l;
    cin>>l;

    vector<int> friends;

    for(int i=1; i<=l; i++)
    {
        friends.push_back(i);
    }

    int rounds;
    cin>>rounds;
    for(int i=0; i<rounds; i++)
    {
        int number;
        cin>>number;

        for(int j=number-1; j<l; j++)
        {
            int position = j+1;
            if (position % number == 0)
                friends.at(j) = -1;
        }

        for(int j=number-1; j<l; j++)
        {
            if(friends.at(j) == -1)
                {
                    l--;
                    friends.erase(friends.begin() + j);
                }

        }

        friends.erase(remove(friends.begin(), friends.end(), -1), friends.end());
    }

    for(const auto &elem : friends) {
        cout << elem << endl;
    }
    
    return 0;
}
