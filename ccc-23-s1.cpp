#include <iostream>

using namespace std;


int main()
{
    unsigned int C;
    cin>>C;
  
    int tiles[2][C]; // the grid of tiles
  
    // Fill the matrix w/ values
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<C; j++)
        {
            cin>>tiles[i][j];
        }
    }

    int sides_counter = 0;
    for(unsigned int r=0; r<2; r++)
    {
        for(unsigned int c=0; c<C; c++)
        {
            // If tile is white, continue
            if(tiles[r][c] != 1)
                continue;

            //Check left border
            if(c == 0 || (c > 0 && tiles[r][c-1] == 0)) // if it's leftmost tile or tile to the left is white
                sides_counter++;
            
            // Check right border
            if(c == C-1 || (c < C-1 && tiles[r][c+1] == 0)) // if it's rightmost tile or tile to the right is white
                sides_counter++;

            // Check bottom border for even top row tiles & check if top row tile borders with edge above
            if(((r==0 && c%2 == 0) && tiles[1][c] == 0) || (r==0 && c%2 == 1))
                sides_counter++;


            // Check top border for even bottom row tiles & check if bottom row tile borders with edge below
            if(((r==1 && c%2 == 0) && tiles[0][c] == 0) || (r==1 && c%2 == 1))
                sides_counter++;
        }
    }

    cout<<sides_counter<<endl; // output # of sides that need tape
    
    return 0;
}
