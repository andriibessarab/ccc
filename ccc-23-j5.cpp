#include <iostream>
#include <vector>

using namespace std;


int find_occurrences(const string& word, vector<vector<char>>& grid, int R, int C, int r, int c, bool done_turn=false, int dr =  0, int dc = 0, int depth = 0)
{
    // Check if went out of bound
    if(r >= R || r < 0 || c >= C || c < 0)
        return 0;

    int occurrences_counter = 0; // count how many times the word occurred

    if(depth == word.length() - 1)
    {
        return (word[word.length() - 1] == grid[r][c]) ? 1 : 0; // check if last letter matches; start exiting recursion
    }

    if(grid[r][c] == word[depth])
    {
        // For each dir check if depth = 0 (meaning first letter) or else which direction is allowed with accordance to dr and dc as well as if there has already been a turn done
        occurrences_counter += (depth == 0) || (dr == -1 && dc == -1) || (!done_turn && ((dr == -1 && dc == +1) || (dr == +1 && dc == -1))) ? find_occurrences(word, grid, R, C, (r-1), (c-1), done_turn ? done_turn : ((dr == -1 && dc == +1) || (dr == +1 && dc == -1)), -1, -1, depth + 1) : 0;
        occurrences_counter += (depth == 0) || (dr == -1 && dc == 0) || (!done_turn && ((dr == 0 && dc == +1) || (dr == 0 && dc == -1))) ? find_occurrences(word, grid, R, C, (r-1), (c), done_turn ? done_turn : ((dr == 0 && dc == +1) || (dr == 0 && dc == -1)), -1, 0, depth + 1) : 0;
        occurrences_counter += (depth == 0) || (dr == -1 && dc == 1) || (!done_turn && ((dr == -1 && dc == -1) || (dr == +1 && dc == +1))) ? find_occurrences(word, grid, R, C, (r-1), (c+1), done_turn ? done_turn : ((dr == -1 && dc == -1) || (dr == +1 && dc == +1)), -1, +1, depth + 1) : 0;
        occurrences_counter += (depth == 0) || (dr == 0 && dc == -1) || (!done_turn && ((dr == -1 && dc == 0) || (dr == +1 && dc == 0))) ? find_occurrences(word, grid, R, C, (r), (c-1), done_turn ? done_turn : ((dr == -1 && dc == 0) || (dr == +1 && dc == 0)), 0, -1, depth + 1) : 0;
        occurrences_counter += (depth == 0) || (dr == 0 && dc == 1) || (!done_turn && ((dr == -1 && dc == 0) || (dr == +1 && dc == 0))) ? find_occurrences(word, grid, R, C, (r), (c+1), done_turn ? done_turn : ((dr == -1 && dc == 0) || (dr == +1 && dc == 0)), 0, +1, depth + 1) : 0;
        occurrences_counter += (depth == 0) || (dr == 1 && dc == -1) | (!done_turn && ((dr == -1 && dc == -1) || (dr == +1 && dc == +1))) ? find_occurrences(word, grid, R, C, (r+1), (c-1), done_turn ? done_turn : ((dr == -1 && dc == -1) || (dr == +1 && dc == +1)), +1, -1, depth + 1) : 0;
        occurrences_counter += (depth == 0) || (dr == 1 && dc == 0) || (!done_turn && ((dr == 0 && dc == +1) || (dr == 0 && dc == -1))) ? find_occurrences(word, grid, R, C, (r+1), (c), done_turn ? done_turn : ((dr == 0 && dc == +1) || (dr == 0 && dc == -1)), +1, 0, depth + 1) : 0;
        occurrences_counter += (depth == 0) || (dr == 1 && dc == 1) || (!done_turn && ((dr == -1 && dc == +1) || (dr == +1 && dc == -1))) ? find_occurrences(word, grid, R, C, (r+1), (c+1) , done_turn ? done_turn : ((dr == -1 && dc == +1) || (dr == +1 && dc == -1)), +1, +1, depth + 1) : 0;
    }

    return occurrences_counter; // return # of times the word occurred
}


int main() {
    string word; // word to look for
    unsigned short R, C; // dimensions of the board (1-100)
    unsigned int H = 0; // # of occurrences of the word
    cin>>word>>R>>C;

    // Generate the grid
    vector<vector<char>> grid(R, vector<char>(C)); // the grid of letters
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            cin>>grid[i][j];
        }
    }

    // Iterate through array looking for the first letter of the word
    unsigned char FIRST_LETTER = word[0]; // first letter of the word
    for(int i=0; i<R; i++) {
        for (int j = 0; j < C; j++)
        {
            if(grid[i][j] == FIRST_LETTER)
                H += find_occurrences(word, grid, R, C, i, j);
        }
    }

    cout<<H<<endl; // output total # of occurrences

    return 0;
}

