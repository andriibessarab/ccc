#include <iostream>
#include <vector>

using namespace std;


unsigned int total_harvest(int R,  int C, vector<vector<char>> &field, vector<vector<bool>> &field_map, int x, int y) {

    // if out of bounds
    if(x < 0 || x >= R || y < 0 || y >= C)
        return 0;

    // if been here don't go here anymore
    if(field_map[x][y])
        return 0;

    int  T = 0;
    char curr_char = (char)field[x][y];

    // write swithc for current char if L then add 10 if M add 5 if S add 1
    switch(curr_char){
        case 'L':
            T += 10;
            break;
        case 'M':
            T += 5;
            break;
        case 'S':
            T++;
            break;
    }

    // mark as visited
    field_map[x][y] = true;

    T += total_harvest(R, C, field, field_map, x + 1, y);
    T += total_harvest(R, C, field, field_map, x - 1, y);
    T += total_harvest(R, C, field, field_map, x, y + 1);
    T += total_harvest(R, C, field, field_map, x, y - 1);

    return T;
}

int main() {

    int R, C, A, B;
    cin >> R >> C;

    // define field and filed map as vectors
    vector<vector<char>> field(R, vector<char>(C));
    vector<vector<bool>> field_map(R, vector<bool>(C));


    // fill vector with values
    for(int i=0; i<R; i++)
    {
        string r;
        cin >> r;
        // split string into characters
        for(int k=0; k<C; k++)
        {
            char c = r[k];
            field[i][k] = c;
            field_map[i][k] = c == '*';
        }
    }


    cin >> A >> B;

     cout<<total_harvest(R, C, field, field_map, A, B)<<endl;


    return 0;
}
