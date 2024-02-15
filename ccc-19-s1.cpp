#include <iostream>
#include <algorithm>

using namespace std;

// Two-by-two grid of numbers
unsigned short grid[2][2] = {{1, 2}, {3, 4}};

void horizontalFlip()
{
    swap(grid[0][0], grid[1][0]);
    swap(grid[0][1], grid[1][1]);

}

void verticalFlip()
{
    swap(grid[0][0], grid[0][1]);
    swap(grid[1][0], grid[1][1]);

}


int main() {
    string instructions;
    cin>>instructions;

    // Perform flips
    for(char c : instructions)
        c == 'H' ? horizontalFlip() : verticalFlip();

    // Print final grid
    cout<<grid[0][0]<<" "<<grid[0][1]<<endl<<grid[1][0]<<" "<<grid[1][1]<<endl;
    return 0;
}
